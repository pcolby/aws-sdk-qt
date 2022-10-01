// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYVPNTUNNELCERTIFICATEREQUEST_P_H
#define QTAWS_MODIFYVPNTUNNELCERTIFICATEREQUEST_P_H

#include "ec2request_p.h"
#include "modifyvpntunnelcertificaterequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyVpnTunnelCertificateRequest;

class ModifyVpnTunnelCertificateRequestPrivate : public Ec2RequestPrivate {

public:
    ModifyVpnTunnelCertificateRequestPrivate(const Ec2Request::Action action,
                                   ModifyVpnTunnelCertificateRequest * const q);
    ModifyVpnTunnelCertificateRequestPrivate(const ModifyVpnTunnelCertificateRequestPrivate &other,
                                   ModifyVpnTunnelCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyVpnTunnelCertificateRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
