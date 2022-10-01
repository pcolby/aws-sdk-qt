// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEVICEMETADATARESPONSE_P_H
#define QTAWS_UPDATEDEVICEMETADATARESPONSE_P_H

#include "panoramaresponse_p.h"

namespace QtAws {
namespace Panorama {

class UpdateDeviceMetadataResponse;

class UpdateDeviceMetadataResponsePrivate : public PanoramaResponsePrivate {

public:

    explicit UpdateDeviceMetadataResponsePrivate(UpdateDeviceMetadataResponse * const q);

    void parseUpdateDeviceMetadataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDeviceMetadataResponse)
    Q_DISABLE_COPY(UpdateDeviceMetadataResponsePrivate)

};

} // namespace Panorama
} // namespace QtAws

#endif
