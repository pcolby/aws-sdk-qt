// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVPNCONNECTIONDEVICETYPESRESPONSE_P_H
#define QTAWS_GETVPNCONNECTIONDEVICETYPESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class GetVpnConnectionDeviceTypesResponse;

class GetVpnConnectionDeviceTypesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit GetVpnConnectionDeviceTypesResponsePrivate(GetVpnConnectionDeviceTypesResponse * const q);

    void parseGetVpnConnectionDeviceTypesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetVpnConnectionDeviceTypesResponse)
    Q_DISABLE_COPY(GetVpnConnectionDeviceTypesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
