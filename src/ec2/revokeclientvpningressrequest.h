// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKECLIENTVPNINGRESSREQUEST_H
#define QTAWS_REVOKECLIENTVPNINGRESSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class RevokeClientVpnIngressRequestPrivate;

class QTAWSEC2_EXPORT RevokeClientVpnIngressRequest : public Ec2Request {

public:
    RevokeClientVpnIngressRequest(const RevokeClientVpnIngressRequest &other);
    RevokeClientVpnIngressRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RevokeClientVpnIngressRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
