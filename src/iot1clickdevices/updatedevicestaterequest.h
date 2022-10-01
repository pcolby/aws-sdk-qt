// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEVICESTATEREQUEST_H
#define QTAWS_UPDATEDEVICESTATEREQUEST_H

#include "iot1clickdevicesrequest.h"

namespace QtAws {
namespace IoT1ClickDevices {

class UpdateDeviceStateRequestPrivate;

class QTAWSIOT1CLICKDEVICES_EXPORT UpdateDeviceStateRequest : public IoT1ClickDevicesRequest {

public:
    UpdateDeviceStateRequest(const UpdateDeviceStateRequest &other);
    UpdateDeviceStateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDeviceStateRequest)

};

} // namespace IoT1ClickDevices
} // namespace QtAws

#endif
