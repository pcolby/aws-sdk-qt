// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDMESSAGERESPONSE_H
#define QTAWS_SENDMESSAGERESPONSE_H

#include "connectparticipantresponse.h"
#include "sendmessagerequest.h"

namespace QtAws {
namespace ConnectParticipant {

class SendMessageResponsePrivate;

class QTAWSCONNECTPARTICIPANT_EXPORT SendMessageResponse : public ConnectParticipantResponse {
    Q_OBJECT

public:
    SendMessageResponse(const SendMessageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SendMessageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendMessageResponse)
    Q_DISABLE_COPY(SendMessageResponse)

};

} // namespace ConnectParticipant
} // namespace QtAws

#endif
