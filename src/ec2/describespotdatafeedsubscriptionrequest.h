// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESPOTDATAFEEDSUBSCRIPTIONREQUEST_H
#define QTAWS_DESCRIBESPOTDATAFEEDSUBSCRIPTIONREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeSpotDatafeedSubscriptionRequestPrivate;

class QTAWSEC2_EXPORT DescribeSpotDatafeedSubscriptionRequest : public Ec2Request {

public:
    DescribeSpotDatafeedSubscriptionRequest(const DescribeSpotDatafeedSubscriptionRequest &other);
    DescribeSpotDatafeedSubscriptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSpotDatafeedSubscriptionRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
