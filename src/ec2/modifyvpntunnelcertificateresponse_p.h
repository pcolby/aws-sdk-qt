// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYVPNTUNNELCERTIFICATERESPONSE_P_H
#define QTAWS_MODIFYVPNTUNNELCERTIFICATERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifyVpnTunnelCertificateResponse;

class ModifyVpnTunnelCertificateResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifyVpnTunnelCertificateResponsePrivate(ModifyVpnTunnelCertificateResponse * const q);

    void parseModifyVpnTunnelCertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyVpnTunnelCertificateResponse)
    Q_DISABLE_COPY(ModifyVpnTunnelCertificateResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
