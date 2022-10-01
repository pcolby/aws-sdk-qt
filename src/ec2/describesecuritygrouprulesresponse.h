// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESECURITYGROUPRULESRESPONSE_H
#define QTAWS_DESCRIBESECURITYGROUPRULESRESPONSE_H

#include "ec2response.h"
#include "describesecuritygrouprulesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeSecurityGroupRulesResponsePrivate;

class QTAWSEC2_EXPORT DescribeSecurityGroupRulesResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeSecurityGroupRulesResponse(const DescribeSecurityGroupRulesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSecurityGroupRulesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSecurityGroupRulesResponse)
    Q_DISABLE_COPY(DescribeSecurityGroupRulesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
