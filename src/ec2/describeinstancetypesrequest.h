// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCETYPESREQUEST_H
#define QTAWS_DESCRIBEINSTANCETYPESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeInstanceTypesRequestPrivate;

class QTAWSEC2_EXPORT DescribeInstanceTypesRequest : public Ec2Request {

public:
    DescribeInstanceTypesRequest(const DescribeInstanceTypesRequest &other);
    DescribeInstanceTypesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInstanceTypesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
