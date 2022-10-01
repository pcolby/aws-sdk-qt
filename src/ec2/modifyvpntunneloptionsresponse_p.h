// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYVPNTUNNELOPTIONSRESPONSE_P_H
#define QTAWS_MODIFYVPNTUNNELOPTIONSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifyVpnTunnelOptionsResponse;

class ModifyVpnTunnelOptionsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifyVpnTunnelOptionsResponsePrivate(ModifyVpnTunnelOptionsResponse * const q);

    void parseModifyVpnTunnelOptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyVpnTunnelOptionsResponse)
    Q_DISABLE_COPY(ModifyVpnTunnelOptionsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
