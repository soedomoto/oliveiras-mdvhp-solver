#include <population.h>

Population::Population(int depot, Operation& op, double maxDuration, Graph g) {

}

Individual* Population::iterate() {
    /*
        Executes one iteration of the solve method for this population

        One iteration means progess the solving process one step.
        In this case, an evlutionary algorithm, is apply the three operations
        in the individuals of this population that is, selection, cross-over
        than mutation, in this order.

        At the and of a iteration a new set of individuals will replace the
        last generation.

        Retuns the best individual of the new generation, NULL in case of error.
    */
    return NULL;
}

bool Population::addClient(int id) {
    /*
        Adds a client to this population.
        Parameters: id, id of vertex, tha is a client in the Graph g.

        Adds a vertex to be handled by this population, in other words the
        routes created by this population WILL include the client added to it.

        Returns true if the vertex is included, false otherwise.

        False can be retured for a inexistent vertex or a already added vertex
        to THIS population.

        WARNING: This method does NOT verify if the client is in other
        Populations.
    */
    return true;
}

bool Population::removeClient(int id) {
    /*
        Removes a client to this population.
        Parameters: id, id of vertex, tha is a client in the Graph g.

        Removes that was addes to this population, in other words the
        routes created by this population WILL NOT include that client.

        Returns true if the vertex is removed, false otherwise.

        False can be retured for a inexistent vertex;
    */
    return true;
}

void Population::start() {
    /*
        Creates a random set of individuals and save it internaly.

        Using the clients added create a set of random individuals and
        add than to the individuals set.

        WARNING: This function does NOT remove the exisent individuals.
    */
    return;
}

void Population::restart() {
    /*
        Reset a population, in other words, clear and start population.

        Removes the existent individuals and create a new random set using the
        clients added to this population.
        
        Is literay call start and clear in sequence and just it.
    */
    return;
}

void Population::clear() {
    /*
        Removes the existent individuals.    
    */
    return;
}

int Population::badClient() {
    /*
        Returns the client (id) that proprably is impactly badly in the fitness
        of the individuals of this population.

        This is by now done in a mysterious way, when we have figured out how we
        are going to do it, we will change this description.

        returns 0 if none is bad.
    */
    return 0;
}