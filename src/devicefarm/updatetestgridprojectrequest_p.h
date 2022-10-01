// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETESTGRIDPROJECTREQUEST_P_H
#define QTAWS_UPDATETESTGRIDPROJECTREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "updatetestgridprojectrequest.h"

namespace QtAws {
namespace DeviceFarm {

class UpdateTestGridProjectRequest;

class UpdateTestGridProjectRequestPrivate : public DeviceFarmRequestPrivate {

public:
    UpdateTestGridProjectRequestPrivate(const DeviceFarmRequest::Action action,
                                   UpdateTestGridProjectRequest * const q);
    UpdateTestGridProjectRequestPrivate(const UpdateTestGridProjectRequestPrivate &other,
                                   UpdateTestGridProjectRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateTestGridProjectRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
