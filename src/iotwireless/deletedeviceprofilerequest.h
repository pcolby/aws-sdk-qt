// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEVICEPROFILEREQUEST_H
#define QTAWS_DELETEDEVICEPROFILEREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class DeleteDeviceProfileRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT DeleteDeviceProfileRequest : public IoTWirelessRequest {

public:
    DeleteDeviceProfileRequest(const DeleteDeviceProfileRequest &other);
    DeleteDeviceProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDeviceProfileRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
