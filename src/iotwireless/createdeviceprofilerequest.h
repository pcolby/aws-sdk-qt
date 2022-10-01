// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEVICEPROFILEREQUEST_H
#define QTAWS_CREATEDEVICEPROFILEREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class CreateDeviceProfileRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT CreateDeviceProfileRequest : public IoTWirelessRequest {

public:
    CreateDeviceProfileRequest(const CreateDeviceProfileRequest &other);
    CreateDeviceProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDeviceProfileRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
