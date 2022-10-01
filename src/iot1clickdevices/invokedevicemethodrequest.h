// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INVOKEDEVICEMETHODREQUEST_H
#define QTAWS_INVOKEDEVICEMETHODREQUEST_H

#include "iot1clickdevicesrequest.h"

namespace QtAws {
namespace IoT1ClickDevices {

class InvokeDeviceMethodRequestPrivate;

class QTAWSIOT1CLICKDEVICES_EXPORT InvokeDeviceMethodRequest : public IoT1ClickDevicesRequest {

public:
    InvokeDeviceMethodRequest(const InvokeDeviceMethodRequest &other);
    InvokeDeviceMethodRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(InvokeDeviceMethodRequest)

};

} // namespace IoT1ClickDevices
} // namespace QtAws

#endif
