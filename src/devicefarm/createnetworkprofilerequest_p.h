// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENETWORKPROFILEREQUEST_P_H
#define QTAWS_CREATENETWORKPROFILEREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "createnetworkprofilerequest.h"

namespace QtAws {
namespace DeviceFarm {

class CreateNetworkProfileRequest;

class CreateNetworkProfileRequestPrivate : public DeviceFarmRequestPrivate {

public:
    CreateNetworkProfileRequestPrivate(const DeviceFarmRequest::Action action,
                                   CreateNetworkProfileRequest * const q);
    CreateNetworkProfileRequestPrivate(const CreateNetworkProfileRequestPrivate &other,
                                   CreateNetworkProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateNetworkProfileRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
