// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLASSICLINKINSTANCESREQUEST_H
#define QTAWS_DESCRIBECLASSICLINKINSTANCESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeClassicLinkInstancesRequestPrivate;

class QTAWSEC2_EXPORT DescribeClassicLinkInstancesRequest : public Ec2Request {

public:
    DescribeClassicLinkInstancesRequest(const DescribeClassicLinkInstancesRequest &other);
    DescribeClassicLinkInstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeClassicLinkInstancesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
