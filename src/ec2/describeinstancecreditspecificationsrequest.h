// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCECREDITSPECIFICATIONSREQUEST_H
#define QTAWS_DESCRIBEINSTANCECREDITSPECIFICATIONSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeInstanceCreditSpecificationsRequestPrivate;

class QTAWSEC2_EXPORT DescribeInstanceCreditSpecificationsRequest : public Ec2Request {

public:
    DescribeInstanceCreditSpecificationsRequest(const DescribeInstanceCreditSpecificationsRequest &other);
    DescribeInstanceCreditSpecificationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInstanceCreditSpecificationsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
