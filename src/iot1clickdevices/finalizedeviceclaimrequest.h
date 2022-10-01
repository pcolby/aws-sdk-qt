// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FINALIZEDEVICECLAIMREQUEST_H
#define QTAWS_FINALIZEDEVICECLAIMREQUEST_H

#include "iot1clickdevicesrequest.h"

namespace QtAws {
namespace IoT1ClickDevices {

class FinalizeDeviceClaimRequestPrivate;

class QTAWSIOT1CLICKDEVICES_EXPORT FinalizeDeviceClaimRequest : public IoT1ClickDevicesRequest {

public:
    FinalizeDeviceClaimRequest(const FinalizeDeviceClaimRequest &other);
    FinalizeDeviceClaimRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(FinalizeDeviceClaimRequest)

};

} // namespace IoT1ClickDevices
} // namespace QtAws

#endif
