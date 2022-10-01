// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPARTICIPANTCONNECTIONRESPONSE_P_H
#define QTAWS_CREATEPARTICIPANTCONNECTIONRESPONSE_P_H

#include "connectparticipantresponse_p.h"

namespace QtAws {
namespace ConnectParticipant {

class CreateParticipantConnectionResponse;

class CreateParticipantConnectionResponsePrivate : public ConnectParticipantResponsePrivate {

public:

    explicit CreateParticipantConnectionResponsePrivate(CreateParticipantConnectionResponse * const q);

    void parseCreateParticipantConnectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateParticipantConnectionResponse)
    Q_DISABLE_COPY(CreateParticipantConnectionResponsePrivate)

};

} // namespace ConnectParticipant
} // namespace QtAws

#endif
