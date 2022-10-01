// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEMETHODSREQUEST_H
#define QTAWS_GETDEVICEMETHODSREQUEST_H

#include "iot1clickdevicesrequest.h"

namespace QtAws {
namespace IoT1ClickDevices {

class GetDeviceMethodsRequestPrivate;

class QTAWSIOT1CLICKDEVICES_EXPORT GetDeviceMethodsRequest : public IoT1ClickDevicesRequest {

public:
    GetDeviceMethodsRequest(const GetDeviceMethodsRequest &other);
    GetDeviceMethodsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDeviceMethodsRequest)

};

} // namespace IoT1ClickDevices
} // namespace QtAws

#endif
