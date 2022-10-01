// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPCECONFIGURATIONRESPONSE_P_H
#define QTAWS_DELETEVPCECONFIGURATIONRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class DeleteVPCEConfigurationResponse;

class DeleteVPCEConfigurationResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit DeleteVPCEConfigurationResponsePrivate(DeleteVPCEConfigurationResponse * const q);

    void parseDeleteVPCEConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteVPCEConfigurationResponse)
    Q_DISABLE_COPY(DeleteVPCEConfigurationResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
