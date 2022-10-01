// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCEATTRIBUTEREQUEST_H
#define QTAWS_DESCRIBEINSTANCEATTRIBUTEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeInstanceAttributeRequestPrivate;

class QTAWSEC2_EXPORT DescribeInstanceAttributeRequest : public Ec2Request {

public:
    DescribeInstanceAttributeRequest(const DescribeInstanceAttributeRequest &other);
    DescribeInstanceAttributeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInstanceAttributeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
