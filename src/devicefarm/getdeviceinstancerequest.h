// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEINSTANCEREQUEST_H
#define QTAWS_GETDEVICEINSTANCEREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class GetDeviceInstanceRequestPrivate;

class QTAWSDEVICEFARM_EXPORT GetDeviceInstanceRequest : public DeviceFarmRequest {

public:
    GetDeviceInstanceRequest(const GetDeviceInstanceRequest &other);
    GetDeviceInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDeviceInstanceRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
