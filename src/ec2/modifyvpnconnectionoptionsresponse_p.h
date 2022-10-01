// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYVPNCONNECTIONOPTIONSRESPONSE_P_H
#define QTAWS_MODIFYVPNCONNECTIONOPTIONSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifyVpnConnectionOptionsResponse;

class ModifyVpnConnectionOptionsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifyVpnConnectionOptionsResponsePrivate(ModifyVpnConnectionOptionsResponse * const q);

    void parseModifyVpnConnectionOptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyVpnConnectionOptionsResponse)
    Q_DISABLE_COPY(ModifyVpnConnectionOptionsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
