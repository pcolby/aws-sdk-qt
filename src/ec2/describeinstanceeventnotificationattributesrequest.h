// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCEEVENTNOTIFICATIONATTRIBUTESREQUEST_H
#define QTAWS_DESCRIBEINSTANCEEVENTNOTIFICATIONATTRIBUTESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeInstanceEventNotificationAttributesRequestPrivate;

class QTAWSEC2_EXPORT DescribeInstanceEventNotificationAttributesRequest : public Ec2Request {

public:
    DescribeInstanceEventNotificationAttributesRequest(const DescribeInstanceEventNotificationAttributesRequest &other);
    DescribeInstanceEventNotificationAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInstanceEventNotificationAttributesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
