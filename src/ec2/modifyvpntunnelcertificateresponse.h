// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYVPNTUNNELCERTIFICATERESPONSE_H
#define QTAWS_MODIFYVPNTUNNELCERTIFICATERESPONSE_H

#include "ec2response.h"
#include "modifyvpntunnelcertificaterequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyVpnTunnelCertificateResponsePrivate;

class QTAWSEC2_EXPORT ModifyVpnTunnelCertificateResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifyVpnTunnelCertificateResponse(const ModifyVpnTunnelCertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyVpnTunnelCertificateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyVpnTunnelCertificateResponse)
    Q_DISABLE_COPY(ModifyVpnTunnelCertificateResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
