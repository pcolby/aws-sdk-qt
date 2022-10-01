// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANNELBANREQUEST_H
#define QTAWS_DESCRIBECHANNELBANREQUEST_H

#include "chimesdkmessagingrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class DescribeChannelBanRequestPrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT DescribeChannelBanRequest : public ChimeSdkMessagingRequest {

public:
    DescribeChannelBanRequest(const DescribeChannelBanRequest &other);
    DescribeChannelBanRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeChannelBanRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
