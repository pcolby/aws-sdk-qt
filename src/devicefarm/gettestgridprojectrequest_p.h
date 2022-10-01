// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTESTGRIDPROJECTREQUEST_P_H
#define QTAWS_GETTESTGRIDPROJECTREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "gettestgridprojectrequest.h"

namespace QtAws {
namespace DeviceFarm {

class GetTestGridProjectRequest;

class GetTestGridProjectRequestPrivate : public DeviceFarmRequestPrivate {

public:
    GetTestGridProjectRequestPrivate(const DeviceFarmRequest::Action action,
                                   GetTestGridProjectRequest * const q);
    GetTestGridProjectRequestPrivate(const GetTestGridProjectRequestPrivate &other,
                                   GetTestGridProjectRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTestGridProjectRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
