// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPLYSECURITYGROUPSTOCLIENTVPNTARGETNETWORKRESPONSE_H
#define QTAWS_APPLYSECURITYGROUPSTOCLIENTVPNTARGETNETWORKRESPONSE_H

#include "ec2response.h"
#include "applysecuritygroupstoclientvpntargetnetworkrequest.h"

namespace QtAws {
namespace Ec2 {

class ApplySecurityGroupsToClientVpnTargetNetworkResponsePrivate;

class QTAWSEC2_EXPORT ApplySecurityGroupsToClientVpnTargetNetworkResponse : public Ec2Response {
    Q_OBJECT

public:
    ApplySecurityGroupsToClientVpnTargetNetworkResponse(const ApplySecurityGroupsToClientVpnTargetNetworkRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ApplySecurityGroupsToClientVpnTargetNetworkRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ApplySecurityGroupsToClientVpnTargetNetworkResponse)
    Q_DISABLE_COPY(ApplySecurityGroupsToClientVpnTargetNetworkResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
