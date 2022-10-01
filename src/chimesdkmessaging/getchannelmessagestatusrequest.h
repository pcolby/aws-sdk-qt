// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANNELMESSAGESTATUSREQUEST_H
#define QTAWS_GETCHANNELMESSAGESTATUSREQUEST_H

#include "chimesdkmessagingrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class GetChannelMessageStatusRequestPrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT GetChannelMessageStatusRequest : public ChimeSdkMessagingRequest {

public:
    GetChannelMessageStatusRequest(const GetChannelMessageStatusRequest &other);
    GetChannelMessageStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetChannelMessageStatusRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
