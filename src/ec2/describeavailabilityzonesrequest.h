// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAVAILABILITYZONESREQUEST_H
#define QTAWS_DESCRIBEAVAILABILITYZONESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeAvailabilityZonesRequestPrivate;

class QTAWSEC2_EXPORT DescribeAvailabilityZonesRequest : public Ec2Request {

public:
    DescribeAvailabilityZonesRequest(const DescribeAvailabilityZonesRequest &other);
    DescribeAvailabilityZonesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAvailabilityZonesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
