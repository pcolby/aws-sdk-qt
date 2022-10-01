// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANNELMODERATORREQUEST_H
#define QTAWS_DESCRIBECHANNELMODERATORREQUEST_H

#include "chimesdkmessagingrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class DescribeChannelModeratorRequestPrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT DescribeChannelModeratorRequest : public ChimeSdkMessagingRequest {

public:
    DescribeChannelModeratorRequest(const DescribeChannelModeratorRequest &other);
    DescribeChannelModeratorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeChannelModeratorRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
