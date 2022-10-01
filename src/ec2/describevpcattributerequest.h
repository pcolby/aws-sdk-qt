// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCATTRIBUTEREQUEST_H
#define QTAWS_DESCRIBEVPCATTRIBUTEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeVpcAttributeRequestPrivate;

class QTAWSEC2_EXPORT DescribeVpcAttributeRequest : public Ec2Request {

public:
    DescribeVpcAttributeRequest(const DescribeVpcAttributeRequest &other);
    DescribeVpcAttributeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVpcAttributeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
