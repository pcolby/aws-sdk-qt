// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INITIATEDEVICECLAIMREQUEST_H
#define QTAWS_INITIATEDEVICECLAIMREQUEST_H

#include "iot1clickdevicesrequest.h"

namespace QtAws {
namespace IoT1ClickDevices {

class InitiateDeviceClaimRequestPrivate;

class QTAWSIOT1CLICKDEVICES_EXPORT InitiateDeviceClaimRequest : public IoT1ClickDevicesRequest {

public:
    InitiateDeviceClaimRequest(const InitiateDeviceClaimRequest &other);
    InitiateDeviceClaimRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(InitiateDeviceClaimRequest)

};

} // namespace IoT1ClickDevices
} // namespace QtAws

#endif
