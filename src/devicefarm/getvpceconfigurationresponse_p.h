// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVPCECONFIGURATIONRESPONSE_P_H
#define QTAWS_GETVPCECONFIGURATIONRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class GetVPCEConfigurationResponse;

class GetVPCEConfigurationResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit GetVPCEConfigurationResponsePrivate(GetVPCEConfigurationResponse * const q);

    void parseGetVPCEConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetVPCEConfigurationResponse)
    Q_DISABLE_COPY(GetVPCEConfigurationResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
