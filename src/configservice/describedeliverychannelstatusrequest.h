// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDELIVERYCHANNELSTATUSREQUEST_H
#define QTAWS_DESCRIBEDELIVERYCHANNELSTATUSREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeDeliveryChannelStatusRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT DescribeDeliveryChannelStatusRequest : public ConfigServiceRequest {

public:
    DescribeDeliveryChannelStatusRequest(const DescribeDeliveryChannelStatusRequest &other);
    DescribeDeliveryChannelStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDeliveryChannelStatusRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
