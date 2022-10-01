// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESECURITYGROUPRULEDESCRIPTIONSINGRESSREQUEST_H
#define QTAWS_UPDATESECURITYGROUPRULEDESCRIPTIONSINGRESSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class UpdateSecurityGroupRuleDescriptionsIngressRequestPrivate;

class QTAWSEC2_EXPORT UpdateSecurityGroupRuleDescriptionsIngressRequest : public Ec2Request {

public:
    UpdateSecurityGroupRuleDescriptionsIngressRequest(const UpdateSecurityGroupRuleDescriptionsIngressRequest &other);
    UpdateSecurityGroupRuleDescriptionsIngressRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSecurityGroupRuleDescriptionsIngressRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
