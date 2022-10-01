// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESECURITYGROUPRULEDESCRIPTIONSINGRESSRESPONSE_H
#define QTAWS_UPDATESECURITYGROUPRULEDESCRIPTIONSINGRESSRESPONSE_H

#include "ec2response.h"
#include "updatesecuritygroupruledescriptionsingressrequest.h"

namespace QtAws {
namespace Ec2 {

class UpdateSecurityGroupRuleDescriptionsIngressResponsePrivate;

class QTAWSEC2_EXPORT UpdateSecurityGroupRuleDescriptionsIngressResponse : public Ec2Response {
    Q_OBJECT

public:
    UpdateSecurityGroupRuleDescriptionsIngressResponse(const UpdateSecurityGroupRuleDescriptionsIngressRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSecurityGroupRuleDescriptionsIngressRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSecurityGroupRuleDescriptionsIngressResponse)
    Q_DISABLE_COPY(UpdateSecurityGroupRuleDescriptionsIngressResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
