// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDUSERSMESSAGESRESPONSE_H
#define QTAWS_SENDUSERSMESSAGESRESPONSE_H

#include "pinpointresponse.h"
#include "sendusersmessagesrequest.h"

namespace QtAws {
namespace Pinpoint {

class SendUsersMessagesResponsePrivate;

class QTAWSPINPOINT_EXPORT SendUsersMessagesResponse : public PinpointResponse {
    Q_OBJECT

public:
    SendUsersMessagesResponse(const SendUsersMessagesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SendUsersMessagesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendUsersMessagesResponse)
    Q_DISABLE_COPY(SendUsersMessagesResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
