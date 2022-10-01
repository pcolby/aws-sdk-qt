// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PROVISIONDEVICERESPONSE_P_H
#define QTAWS_PROVISIONDEVICERESPONSE_P_H

#include "panoramaresponse_p.h"

namespace QtAws {
namespace Panorama {

class ProvisionDeviceResponse;

class ProvisionDeviceResponsePrivate : public PanoramaResponsePrivate {

public:

    explicit ProvisionDeviceResponsePrivate(ProvisionDeviceResponse * const q);

    void parseProvisionDeviceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ProvisionDeviceResponse)
    Q_DISABLE_COPY(ProvisionDeviceResponsePrivate)

};

} // namespace Panorama
} // namespace QtAws

#endif
