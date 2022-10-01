// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKPROFILEREQUEST_P_H
#define QTAWS_DELETENETWORKPROFILEREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "deletenetworkprofilerequest.h"

namespace QtAws {
namespace DeviceFarm {

class DeleteNetworkProfileRequest;

class DeleteNetworkProfileRequestPrivate : public DeviceFarmRequestPrivate {

public:
    DeleteNetworkProfileRequestPrivate(const DeviceFarmRequest::Action action,
                                   DeleteNetworkProfileRequest * const q);
    DeleteNetworkProfileRequestPrivate(const DeleteNetworkProfileRequestPrivate &other,
                                   DeleteNetworkProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteNetworkProfileRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
