// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOREDEVICEREQUEST_P_H
#define QTAWS_GETCOREDEVICEREQUEST_P_H

#include "greengrassv2request_p.h"
#include "getcoredevicerequest.h"

namespace QtAws {
namespace GreengrassV2 {

class GetCoreDeviceRequest;

class GetCoreDeviceRequestPrivate : public GreengrassV2RequestPrivate {

public:
    GetCoreDeviceRequestPrivate(const GreengrassV2Request::Action action,
                                   GetCoreDeviceRequest * const q);
    GetCoreDeviceRequestPrivate(const GetCoreDeviceRequestPrivate &other,
                                   GetCoreDeviceRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCoreDeviceRequest)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
