// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECHANNELMEMBERSHIPRESPONSE_H
#define QTAWS_CREATECHANNELMEMBERSHIPRESPONSE_H

#include "chimesdkmessagingresponse.h"
#include "createchannelmembershiprequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class CreateChannelMembershipResponsePrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT CreateChannelMembershipResponse : public ChimeSdkMessagingResponse {
    Q_OBJECT

public:
    CreateChannelMembershipResponse(const CreateChannelMembershipRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateChannelMembershipRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateChannelMembershipResponse)
    Q_DISABLE_COPY(CreateChannelMembershipResponse)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
