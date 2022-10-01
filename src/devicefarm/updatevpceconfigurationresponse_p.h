// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVPCECONFIGURATIONRESPONSE_P_H
#define QTAWS_UPDATEVPCECONFIGURATIONRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class UpdateVPCEConfigurationResponse;

class UpdateVPCEConfigurationResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit UpdateVPCEConfigurationResponsePrivate(UpdateVPCEConfigurationResponse * const q);

    void parseUpdateVPCEConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateVPCEConfigurationResponse)
    Q_DISABLE_COPY(UpdateVPCEConfigurationResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
