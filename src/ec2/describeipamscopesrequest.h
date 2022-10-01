// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIPAMSCOPESREQUEST_H
#define QTAWS_DESCRIBEIPAMSCOPESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeIpamScopesRequestPrivate;

class QTAWSEC2_EXPORT DescribeIpamScopesRequest : public Ec2Request {

public:
    DescribeIpamScopesRequest(const DescribeIpamScopesRequest &other);
    DescribeIpamScopesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeIpamScopesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
