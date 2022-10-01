// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEVICEPOOLREQUEST_H
#define QTAWS_UPDATEDEVICEPOOLREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class UpdateDevicePoolRequestPrivate;

class QTAWSDEVICEFARM_EXPORT UpdateDevicePoolRequest : public DeviceFarmRequest {

public:
    UpdateDevicePoolRequest(const UpdateDevicePoolRequest &other);
    UpdateDevicePoolRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDevicePoolRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
