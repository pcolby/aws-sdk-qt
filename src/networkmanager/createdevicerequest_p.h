// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEVICEREQUEST_P_H
#define QTAWS_CREATEDEVICEREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "createdevicerequest.h"

namespace QtAws {
namespace NetworkManager {

class CreateDeviceRequest;

class CreateDeviceRequestPrivate : public NetworkManagerRequestPrivate {

public:
    CreateDeviceRequestPrivate(const NetworkManagerRequest::Action action,
                                   CreateDeviceRequest * const q);
    CreateDeviceRequestPrivate(const CreateDeviceRequestPrivate &other,
                                   CreateDeviceRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDeviceRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
