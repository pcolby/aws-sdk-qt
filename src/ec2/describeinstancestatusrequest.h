// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCESTATUSREQUEST_H
#define QTAWS_DESCRIBEINSTANCESTATUSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeInstanceStatusRequestPrivate;

class QTAWSEC2_EXPORT DescribeInstanceStatusRequest : public Ec2Request {

public:
    DescribeInstanceStatusRequest(const DescribeInstanceStatusRequest &other);
    DescribeInstanceStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInstanceStatusRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
