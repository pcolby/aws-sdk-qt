// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FINALIZEDEVICECLAIMRESPONSE_H
#define QTAWS_FINALIZEDEVICECLAIMRESPONSE_H

#include "iot1clickdevicesresponse.h"
#include "finalizedeviceclaimrequest.h"

namespace QtAws {
namespace IoT1ClickDevices {

class FinalizeDeviceClaimResponsePrivate;

class QTAWSIOT1CLICKDEVICES_EXPORT FinalizeDeviceClaimResponse : public IoT1ClickDevicesResponse {
    Q_OBJECT

public:
    FinalizeDeviceClaimResponse(const FinalizeDeviceClaimRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const FinalizeDeviceClaimRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(FinalizeDeviceClaimResponse)
    Q_DISABLE_COPY(FinalizeDeviceClaimResponse)

};

} // namespace IoT1ClickDevices
} // namespace QtAws

#endif
