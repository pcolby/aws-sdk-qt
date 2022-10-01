// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDELIVERYCHANNELSREQUEST_H
#define QTAWS_DESCRIBEDELIVERYCHANNELSREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeDeliveryChannelsRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT DescribeDeliveryChannelsRequest : public ConfigServiceRequest {

public:
    DescribeDeliveryChannelsRequest(const DescribeDeliveryChannelsRequest &other);
    DescribeDeliveryChannelsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDeliveryChannelsRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
