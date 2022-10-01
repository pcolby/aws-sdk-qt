// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEPOOLCOMPATIBILITYREQUEST_H
#define QTAWS_GETDEVICEPOOLCOMPATIBILITYREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class GetDevicePoolCompatibilityRequestPrivate;

class QTAWSDEVICEFARM_EXPORT GetDevicePoolCompatibilityRequest : public DeviceFarmRequest {

public:
    GetDevicePoolCompatibilityRequest(const GetDevicePoolCompatibilityRequest &other);
    GetDevicePoolCompatibilityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDevicePoolCompatibilityRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
