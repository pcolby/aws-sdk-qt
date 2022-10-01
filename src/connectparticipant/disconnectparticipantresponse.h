// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISCONNECTPARTICIPANTRESPONSE_H
#define QTAWS_DISCONNECTPARTICIPANTRESPONSE_H

#include "connectparticipantresponse.h"
#include "disconnectparticipantrequest.h"

namespace QtAws {
namespace ConnectParticipant {

class DisconnectParticipantResponsePrivate;

class QTAWSCONNECTPARTICIPANT_EXPORT DisconnectParticipantResponse : public ConnectParticipantResponse {
    Q_OBJECT

public:
    DisconnectParticipantResponse(const DisconnectParticipantRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisconnectParticipantRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisconnectParticipantResponse)
    Q_DISABLE_COPY(DisconnectParticipantResponse)

};

} // namespace ConnectParticipant
} // namespace QtAws

#endif
