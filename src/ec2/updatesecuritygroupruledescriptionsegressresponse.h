// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESECURITYGROUPRULEDESCRIPTIONSEGRESSRESPONSE_H
#define QTAWS_UPDATESECURITYGROUPRULEDESCRIPTIONSEGRESSRESPONSE_H

#include "ec2response.h"
#include "updatesecuritygroupruledescriptionsegressrequest.h"

namespace QtAws {
namespace Ec2 {

class UpdateSecurityGroupRuleDescriptionsEgressResponsePrivate;

class QTAWSEC2_EXPORT UpdateSecurityGroupRuleDescriptionsEgressResponse : public Ec2Response {
    Q_OBJECT

public:
    UpdateSecurityGroupRuleDescriptionsEgressResponse(const UpdateSecurityGroupRuleDescriptionsEgressRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSecurityGroupRuleDescriptionsEgressRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSecurityGroupRuleDescriptionsEgressResponse)
    Q_DISABLE_COPY(UpdateSecurityGroupRuleDescriptionsEgressResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
