// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISCONNECTPARTICIPANTRESPONSE_P_H
#define QTAWS_DISCONNECTPARTICIPANTRESPONSE_P_H

#include "connectparticipantresponse_p.h"

namespace QtAws {
namespace ConnectParticipant {

class DisconnectParticipantResponse;

class DisconnectParticipantResponsePrivate : public ConnectParticipantResponsePrivate {

public:

    explicit DisconnectParticipantResponsePrivate(DisconnectParticipantResponse * const q);

    void parseDisconnectParticipantResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisconnectParticipantResponse)
    Q_DISABLE_COPY(DisconnectParticipantResponsePrivate)

};

} // namespace ConnectParticipant
} // namespace QtAws

#endif
