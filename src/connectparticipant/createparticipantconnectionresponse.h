// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPARTICIPANTCONNECTIONRESPONSE_H
#define QTAWS_CREATEPARTICIPANTCONNECTIONRESPONSE_H

#include "connectparticipantresponse.h"
#include "createparticipantconnectionrequest.h"

namespace QtAws {
namespace ConnectParticipant {

class CreateParticipantConnectionResponsePrivate;

class QTAWSCONNECTPARTICIPANT_EXPORT CreateParticipantConnectionResponse : public ConnectParticipantResponse {
    Q_OBJECT

public:
    CreateParticipantConnectionResponse(const CreateParticipantConnectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateParticipantConnectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateParticipantConnectionResponse)
    Q_DISABLE_COPY(CreateParticipantConnectionResponse)

};

} // namespace ConnectParticipant
} // namespace QtAws

#endif
