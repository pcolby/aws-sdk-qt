// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANNELMODERATEDBYAPPINSTANCEUSERREQUEST_H
#define QTAWS_DESCRIBECHANNELMODERATEDBYAPPINSTANCEUSERREQUEST_H

#include "chimesdkmessagingrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class DescribeChannelModeratedByAppInstanceUserRequestPrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT DescribeChannelModeratedByAppInstanceUserRequest : public ChimeSdkMessagingRequest {

public:
    DescribeChannelModeratedByAppInstanceUserRequest(const DescribeChannelModeratedByAppInstanceUserRequest &other);
    DescribeChannelModeratedByAppInstanceUserRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeChannelModeratedByAppInstanceUserRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
