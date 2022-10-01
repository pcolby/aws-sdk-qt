// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEVICEMETADATARESPONSE_H
#define QTAWS_UPDATEDEVICEMETADATARESPONSE_H

#include "panoramaresponse.h"
#include "updatedevicemetadatarequest.h"

namespace QtAws {
namespace Panorama {

class UpdateDeviceMetadataResponsePrivate;

class QTAWSPANORAMA_EXPORT UpdateDeviceMetadataResponse : public PanoramaResponse {
    Q_OBJECT

public:
    UpdateDeviceMetadataResponse(const UpdateDeviceMetadataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDeviceMetadataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDeviceMetadataResponse)
    Q_DISABLE_COPY(UpdateDeviceMetadataResponse)

};

} // namespace Panorama
} // namespace QtAws

#endif
