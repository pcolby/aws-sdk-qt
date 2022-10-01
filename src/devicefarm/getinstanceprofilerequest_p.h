// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCEPROFILEREQUEST_P_H
#define QTAWS_GETINSTANCEPROFILEREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "getinstanceprofilerequest.h"

namespace QtAws {
namespace DeviceFarm {

class GetInstanceProfileRequest;

class GetInstanceProfileRequestPrivate : public DeviceFarmRequestPrivate {

public:
    GetInstanceProfileRequestPrivate(const DeviceFarmRequest::Action action,
                                   GetInstanceProfileRequest * const q);
    GetInstanceProfileRequestPrivate(const GetInstanceProfileRequestPrivate &other,
                                   GetInstanceProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetInstanceProfileRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
