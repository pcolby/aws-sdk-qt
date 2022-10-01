// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLIENTVPNAUTHORIZATIONRULESREQUEST_H
#define QTAWS_DESCRIBECLIENTVPNAUTHORIZATIONRULESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeClientVpnAuthorizationRulesRequestPrivate;

class QTAWSEC2_EXPORT DescribeClientVpnAuthorizationRulesRequest : public Ec2Request {

public:
    DescribeClientVpnAuthorizationRulesRequest(const DescribeClientVpnAuthorizationRulesRequest &other);
    DescribeClientVpnAuthorizationRulesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeClientVpnAuthorizationRulesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
