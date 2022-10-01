// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDMESSAGESRESPONSE_H
#define QTAWS_SENDMESSAGESRESPONSE_H

#include "pinpointresponse.h"
#include "sendmessagesrequest.h"

namespace QtAws {
namespace Pinpoint {

class SendMessagesResponsePrivate;

class QTAWSPINPOINT_EXPORT SendMessagesResponse : public PinpointResponse {
    Q_OBJECT

public:
    SendMessagesResponse(const SendMessagesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SendMessagesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendMessagesResponse)
    Q_DISABLE_COPY(SendMessagesResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
