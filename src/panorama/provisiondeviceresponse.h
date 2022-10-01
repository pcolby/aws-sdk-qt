// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PROVISIONDEVICERESPONSE_H
#define QTAWS_PROVISIONDEVICERESPONSE_H

#include "panoramaresponse.h"
#include "provisiondevicerequest.h"

namespace QtAws {
namespace Panorama {

class ProvisionDeviceResponsePrivate;

class QTAWSPANORAMA_EXPORT ProvisionDeviceResponse : public PanoramaResponse {
    Q_OBJECT

public:
    ProvisionDeviceResponse(const ProvisionDeviceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ProvisionDeviceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ProvisionDeviceResponse)
    Q_DISABLE_COPY(ProvisionDeviceResponse)

};

} // namespace Panorama
} // namespace QtAws

#endif
