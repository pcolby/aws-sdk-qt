// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLIENTVPNAUTHORIZATIONRULESRESPONSE_H
#define QTAWS_DESCRIBECLIENTVPNAUTHORIZATIONRULESRESPONSE_H

#include "ec2response.h"
#include "describeclientvpnauthorizationrulesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeClientVpnAuthorizationRulesResponsePrivate;

class QTAWSEC2_EXPORT DescribeClientVpnAuthorizationRulesResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeClientVpnAuthorizationRulesResponse(const DescribeClientVpnAuthorizationRulesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeClientVpnAuthorizationRulesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeClientVpnAuthorizationRulesResponse)
    Q_DISABLE_COPY(DescribeClientVpnAuthorizationRulesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
