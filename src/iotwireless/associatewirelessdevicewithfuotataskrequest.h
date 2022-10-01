// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEWIRELESSDEVICEWITHFUOTATASKREQUEST_H
#define QTAWS_ASSOCIATEWIRELESSDEVICEWITHFUOTATASKREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class AssociateWirelessDeviceWithFuotaTaskRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT AssociateWirelessDeviceWithFuotaTaskRequest : public IoTWirelessRequest {

public:
    AssociateWirelessDeviceWithFuotaTaskRequest(const AssociateWirelessDeviceWithFuotaTaskRequest &other);
    AssociateWirelessDeviceWithFuotaTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateWirelessDeviceWithFuotaTaskRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
