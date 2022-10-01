// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESECURITYGROUPRULEDESCRIPTIONSEGRESSREQUEST_H
#define QTAWS_UPDATESECURITYGROUPRULEDESCRIPTIONSEGRESSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class UpdateSecurityGroupRuleDescriptionsEgressRequestPrivate;

class QTAWSEC2_EXPORT UpdateSecurityGroupRuleDescriptionsEgressRequest : public Ec2Request {

public:
    UpdateSecurityGroupRuleDescriptionsEgressRequest(const UpdateSecurityGroupRuleDescriptionsEgressRequest &other);
    UpdateSecurityGroupRuleDescriptionsEgressRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSecurityGroupRuleDescriptionsEgressRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
