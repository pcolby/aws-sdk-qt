// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROJECTREQUEST_P_H
#define QTAWS_GETPROJECTREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "getprojectrequest.h"

namespace QtAws {
namespace DeviceFarm {

class GetProjectRequest;

class GetProjectRequestPrivate : public DeviceFarmRequestPrivate {

public:
    GetProjectRequestPrivate(const DeviceFarmRequest::Action action,
                                   GetProjectRequest * const q);
    GetProjectRequestPrivate(const GetProjectRequestPrivate &other,
                                   GetProjectRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetProjectRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
