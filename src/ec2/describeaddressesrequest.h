// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEADDRESSESREQUEST_H
#define QTAWS_DESCRIBEADDRESSESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeAddressesRequestPrivate;

class QTAWSEC2_EXPORT DescribeAddressesRequest : public Ec2Request {

public:
    DescribeAddressesRequest(const DescribeAddressesRequest &other);
    DescribeAddressesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAddressesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
