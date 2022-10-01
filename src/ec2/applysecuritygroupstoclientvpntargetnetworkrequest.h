// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPLYSECURITYGROUPSTOCLIENTVPNTARGETNETWORKREQUEST_H
#define QTAWS_APPLYSECURITYGROUPSTOCLIENTVPNTARGETNETWORKREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ApplySecurityGroupsToClientVpnTargetNetworkRequestPrivate;

class QTAWSEC2_EXPORT ApplySecurityGroupsToClientVpnTargetNetworkRequest : public Ec2Request {

public:
    ApplySecurityGroupsToClientVpnTargetNetworkRequest(const ApplySecurityGroupsToClientVpnTargetNetworkRequest &other);
    ApplySecurityGroupsToClientVpnTargetNetworkRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ApplySecurityGroupsToClientVpnTargetNetworkRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
