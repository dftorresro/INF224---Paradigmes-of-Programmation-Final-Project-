//
// Client Java pour communiquer avec le Serveur C++ 
// eric lecolinet - telecom paristech - 2015
//

import java.io.*;
import java.net.*;

/**
 * Client class for communicating with the C++ Server.
 * This class establishes a connection with the server, sends requests, and receives responses.
 */
public class Client
{
  private static final long serialVersionUID = 1L;
  static final String DEFAULT_HOST = "localhost";
  static final int DEFAULT_PORT = 3331;
  private Socket sock;
  private BufferedReader input;
  private BufferedWriter output;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  
  /**
   * Reads a request from the Terminal, sends the request to the server,
   * retrieves the response, and displays it on the Terminal.
   * Note that the program blocks if the server does not respond.
   * 
   * @param argv The command line arguments. The first argument is the host, and the second argument is the port.
   */
  public static void main(String argv[]) {
    String host = DEFAULT_HOST;
    int port = DEFAULT_PORT;
    if (argv.length >=1) host = argv[0];
    if (argv.length >=2) port = Integer.parseInt(argv[1]);
    
    Client client = null;
    
    try {
      client = new Client(host, port);
    }
    catch (Exception e) {
      System.err.println("Client: Couldn't connect to "+host+":"+port);
      System.exit(1);
    }
    
    System.out.println("Client connected to "+host+":"+port);

    // pour lire depuis la console
    BufferedReader cin = new BufferedReader(new InputStreamReader(System.in));
    
    while (true) {
      System.out.print("Request: ");
      try {
        String request = cin.readLine();
        String response = client.send(request);
        System.out.println("Response: " + response);
      }
      catch (java.io.IOException e) {
        System.err.println("Client: IO error");
        return;
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  /**
   * Initializes the connection with the server.
   * Throws an exception in case of an error.
   * 
   * @param host The host address.
   * @param port The port number.
   * @throws UnknownHostException If the host is unknown.
   * @throws IOException If there is an I/O error.
   */
  public Client(String host, int port) throws UnknownHostException, IOException {
    try {
      sock = new java.net.Socket(host, port);
    }
    catch (java.net.UnknownHostException e) {
      System.err.println("Client: Couldn't find host "+host+":"+port);
      throw e;
    }
    catch (java.io.IOException e) {
      System.err.println("Client: Couldn't reach host "+host+":"+port);
      throw e;
    }
    
    try {
      input = new BufferedReader(new InputStreamReader(sock.getInputStream()));
      output = new BufferedWriter(new OutputStreamWriter(sock.getOutputStream()));
    }
    catch (java.io.IOException e) {
      System.err.println("Client: Couldn't open input or output streams");
      throw e;
    }
  }
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  
  /**
   * Sends a request to the server and returns its response.
   * Note that the method blocks if the server does not respond.
   * 
   * @param request The request to send to the server.
   * @return The response received from the server.
   */
  public String send(String request) {
    // Envoyer la requete au serveur
    try {
      request += "\n";  // ajouter le separateur de lignes
      output.write(request, 0, request.length());
      output.flush();
    }
    catch (java.io.IOException e) {
      System.err.println("Client: Couldn't send message: " + e);
      return null;
    }
    
    // Recuperer le resultat envoye par le serveur
    try {
      return input.readLine();
    }
    catch (java.io.IOException e) {
      System.err.println("Client: Couldn't receive message: " + e);
      return null;
    }
  }
}


