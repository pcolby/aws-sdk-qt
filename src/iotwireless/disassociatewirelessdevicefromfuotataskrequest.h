// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEWIRELESSDEVICEFROMFUOTATASKREQUEST_H
#define QTAWS_DISASSOCIATEWIRELESSDEVICEFROMFUOTATASKREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class DisassociateWirelessDeviceFromFuotaTaskRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT DisassociateWirelessDeviceFromFuotaTaskRequest : public IoTWirelessRequest {

public:
    DisassociateWirelessDeviceFromFuotaTaskRequest(const DisassociateWirelessDeviceFromFuotaTaskRequest &other);
    DisassociateWirelessDeviceFromFuotaTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateWirelessDeviceFromFuotaTaskRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
