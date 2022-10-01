// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESECURITYGROUPREFERENCESREQUEST_H
#define QTAWS_DESCRIBESECURITYGROUPREFERENCESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeSecurityGroupReferencesRequestPrivate;

class QTAWSEC2_EXPORT DescribeSecurityGroupReferencesRequest : public Ec2Request {

public:
    DescribeSecurityGroupReferencesRequest(const DescribeSecurityGroupReferencesRequest &other);
    DescribeSecurityGroupReferencesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSecurityGroupReferencesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
