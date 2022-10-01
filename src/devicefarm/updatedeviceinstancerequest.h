// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEVICEINSTANCEREQUEST_H
#define QTAWS_UPDATEDEVICEINSTANCEREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class UpdateDeviceInstanceRequestPrivate;

class QTAWSDEVICEFARM_EXPORT UpdateDeviceInstanceRequest : public DeviceFarmRequest {

public:
    UpdateDeviceInstanceRequest(const UpdateDeviceInstanceRequest &other);
    UpdateDeviceInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDeviceInstanceRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
