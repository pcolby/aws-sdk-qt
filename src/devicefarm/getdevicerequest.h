// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEREQUEST_H
#define QTAWS_GETDEVICEREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class GetDeviceRequestPrivate;

class QTAWSDEVICEFARM_EXPORT GetDeviceRequest : public DeviceFarmRequest {

public:
    GetDeviceRequest(const GetDeviceRequest &other);
    GetDeviceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDeviceRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
