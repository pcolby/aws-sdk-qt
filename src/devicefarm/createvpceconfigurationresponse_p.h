// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPCECONFIGURATIONRESPONSE_P_H
#define QTAWS_CREATEVPCECONFIGURATIONRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class CreateVPCEConfigurationResponse;

class CreateVPCEConfigurationResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit CreateVPCEConfigurationResponsePrivate(CreateVPCEConfigurationResponse * const q);

    void parseCreateVPCEConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateVPCEConfigurationResponse)
    Q_DISABLE_COPY(CreateVPCEConfigurationResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
