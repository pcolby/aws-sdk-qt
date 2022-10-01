// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVPNCONNECTIONDEVICESAMPLECONFIGURATIONRESPONSE_P_H
#define QTAWS_GETVPNCONNECTIONDEVICESAMPLECONFIGURATIONRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class GetVpnConnectionDeviceSampleConfigurationResponse;

class GetVpnConnectionDeviceSampleConfigurationResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit GetVpnConnectionDeviceSampleConfigurationResponsePrivate(GetVpnConnectionDeviceSampleConfigurationResponse * const q);

    void parseGetVpnConnectionDeviceSampleConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetVpnConnectionDeviceSampleConfigurationResponse)
    Q_DISABLE_COPY(GetVpnConnectionDeviceSampleConfigurationResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
