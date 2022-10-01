// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYVPNTUNNELOPTIONSRESPONSE_H
#define QTAWS_MODIFYVPNTUNNELOPTIONSRESPONSE_H

#include "ec2response.h"
#include "modifyvpntunneloptionsrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyVpnTunnelOptionsResponsePrivate;

class QTAWSEC2_EXPORT ModifyVpnTunnelOptionsResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifyVpnTunnelOptionsResponse(const ModifyVpnTunnelOptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyVpnTunnelOptionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyVpnTunnelOptionsResponse)
    Q_DISABLE_COPY(ModifyVpnTunnelOptionsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
