#ifndef TYPES_H
#define TYPES_H

#define NAME_LENGTH_LIMIT 20

typedef char tPartyName[NAME_LENGTH_LIMIT]; //contenido de la lista, nombre partido
typedef int tNumVotes; //contenido de la lista, votos

typedef struct tItemL {
    tPartyName partyName;
    tNumVotes numVotes;
}tItemL;


#endif //TYPES_H