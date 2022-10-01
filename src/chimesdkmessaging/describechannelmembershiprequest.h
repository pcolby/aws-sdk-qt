// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANNELMEMBERSHIPREQUEST_H
#define QTAWS_DESCRIBECHANNELMEMBERSHIPREQUEST_H

#include "chimesdkmessagingrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class DescribeChannelMembershipRequestPrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT DescribeChannelMembershipRequest : public ChimeSdkMessagingRequest {

public:
    DescribeChannelMembershipRequest(const DescribeChannelMembershipRequest &other);
    DescribeChannelMembershipRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeChannelMembershipRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
