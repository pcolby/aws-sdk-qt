// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVTLDEVICETYPERESPONSE_P_H
#define QTAWS_UPDATEVTLDEVICETYPERESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class UpdateVTLDeviceTypeResponse;

class UpdateVTLDeviceTypeResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit UpdateVTLDeviceTypeResponsePrivate(UpdateVTLDeviceTypeResponse * const q);

    void parseUpdateVTLDeviceTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateVTLDeviceTypeResponse)
    Q_DISABLE_COPY(UpdateVTLDeviceTypeResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
