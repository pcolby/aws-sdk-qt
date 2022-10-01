// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEVICERESPONSE_H
#define QTAWS_DELETEDEVICERESPONSE_H

#include "panoramaresponse.h"
#include "deletedevicerequest.h"

namespace QtAws {
namespace Panorama {

class DeleteDeviceResponsePrivate;

class QTAWSPANORAMA_EXPORT DeleteDeviceResponse : public PanoramaResponse {
    Q_OBJECT

public:
    DeleteDeviceResponse(const DeleteDeviceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDeviceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDeviceResponse)
    Q_DISABLE_COPY(DeleteDeviceResponse)

};

} // namespace Panorama
} // namespace QtAws

#endif
