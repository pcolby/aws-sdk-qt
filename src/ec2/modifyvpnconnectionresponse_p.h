// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYVPNCONNECTIONRESPONSE_P_H
#define QTAWS_MODIFYVPNCONNECTIONRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifyVpnConnectionResponse;

class ModifyVpnConnectionResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifyVpnConnectionResponsePrivate(ModifyVpnConnectionResponse * const q);

    void parseModifyVpnConnectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyVpnConnectionResponse)
    Q_DISABLE_COPY(ModifyVpnConnectionResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
