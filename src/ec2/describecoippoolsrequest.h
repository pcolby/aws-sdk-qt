// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOIPPOOLSREQUEST_H
#define QTAWS_DESCRIBECOIPPOOLSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeCoipPoolsRequestPrivate;

class QTAWSEC2_EXPORT DescribeCoipPoolsRequest : public Ec2Request {

public:
    DescribeCoipPoolsRequest(const DescribeCoipPoolsRequest &other);
    DescribeCoipPoolsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCoipPoolsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
