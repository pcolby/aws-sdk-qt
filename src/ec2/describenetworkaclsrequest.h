// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENETWORKACLSREQUEST_H
#define QTAWS_DESCRIBENETWORKACLSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeNetworkAclsRequestPrivate;

class QTAWSEC2_EXPORT DescribeNetworkAclsRequest : public Ec2Request {

public:
    DescribeNetworkAclsRequest(const DescribeNetworkAclsRequest &other);
    DescribeNetworkAclsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeNetworkAclsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
