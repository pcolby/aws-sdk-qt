// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINSTANCEPROFILEREQUEST_P_H
#define QTAWS_UPDATEINSTANCEPROFILEREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "updateinstanceprofilerequest.h"

namespace QtAws {
namespace DeviceFarm {

class UpdateInstanceProfileRequest;

class UpdateInstanceProfileRequestPrivate : public DeviceFarmRequestPrivate {

public:
    UpdateInstanceProfileRequestPrivate(const DeviceFarmRequest::Action action,
                                   UpdateInstanceProfileRequest * const q);
    UpdateInstanceProfileRequestPrivate(const UpdateInstanceProfileRequestPrivate &other,
                                   UpdateInstanceProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateInstanceProfileRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
