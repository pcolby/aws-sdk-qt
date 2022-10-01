// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INITIATEDEVICECLAIMRESPONSE_H
#define QTAWS_INITIATEDEVICECLAIMRESPONSE_H

#include "iot1clickdevicesresponse.h"
#include "initiatedeviceclaimrequest.h"

namespace QtAws {
namespace IoT1ClickDevices {

class InitiateDeviceClaimResponsePrivate;

class QTAWSIOT1CLICKDEVICES_EXPORT InitiateDeviceClaimResponse : public IoT1ClickDevicesResponse {
    Q_OBJECT

public:
    InitiateDeviceClaimResponse(const InitiateDeviceClaimRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const InitiateDeviceClaimRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(InitiateDeviceClaimResponse)
    Q_DISABLE_COPY(InitiateDeviceClaimResponse)

};

} // namespace IoT1ClickDevices
} // namespace QtAws

#endif
