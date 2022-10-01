// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANNELREQUEST_H
#define QTAWS_DESCRIBECHANNELREQUEST_H

#include "chimesdkmessagingrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class DescribeChannelRequestPrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT DescribeChannelRequest : public ChimeSdkMessagingRequest {

public:
    DescribeChannelRequest(const DescribeChannelRequest &other);
    DescribeChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeChannelRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
