// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLAIMDEVICESBYCLAIMCODEREQUEST_H
#define QTAWS_CLAIMDEVICESBYCLAIMCODEREQUEST_H

#include "iot1clickdevicesrequest.h"

namespace QtAws {
namespace IoT1ClickDevices {

class ClaimDevicesByClaimCodeRequestPrivate;

class QTAWSIOT1CLICKDEVICES_EXPORT ClaimDevicesByClaimCodeRequest : public IoT1ClickDevicesRequest {

public:
    ClaimDevicesByClaimCodeRequest(const ClaimDevicesByClaimCodeRequest &other);
    ClaimDevicesByClaimCodeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ClaimDevicesByClaimCodeRequest)

};

} // namespace IoT1ClickDevices
} // namespace QtAws

#endif
