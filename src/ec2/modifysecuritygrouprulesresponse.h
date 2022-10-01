// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYSECURITYGROUPRULESRESPONSE_H
#define QTAWS_MODIFYSECURITYGROUPRULESRESPONSE_H

#include "ec2response.h"
#include "modifysecuritygrouprulesrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifySecurityGroupRulesResponsePrivate;

class QTAWSEC2_EXPORT ModifySecurityGroupRulesResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifySecurityGroupRulesResponse(const ModifySecurityGroupRulesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifySecurityGroupRulesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifySecurityGroupRulesResponse)
    Q_DISABLE_COPY(ModifySecurityGroupRulesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
