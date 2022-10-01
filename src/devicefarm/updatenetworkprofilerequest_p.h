// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENETWORKPROFILEREQUEST_P_H
#define QTAWS_UPDATENETWORKPROFILEREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "updatenetworkprofilerequest.h"

namespace QtAws {
namespace DeviceFarm {

class UpdateNetworkProfileRequest;

class UpdateNetworkProfileRequestPrivate : public DeviceFarmRequestPrivate {

public:
    UpdateNetworkProfileRequestPrivate(const DeviceFarmRequest::Action action,
                                   UpdateNetworkProfileRequest * const q);
    UpdateNetworkProfileRequestPrivate(const UpdateNetworkProfileRequestPrivate &other,
                                   UpdateNetworkProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateNetworkProfileRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
