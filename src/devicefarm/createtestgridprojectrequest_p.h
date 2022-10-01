// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETESTGRIDPROJECTREQUEST_P_H
#define QTAWS_CREATETESTGRIDPROJECTREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "createtestgridprojectrequest.h"

namespace QtAws {
namespace DeviceFarm {

class CreateTestGridProjectRequest;

class CreateTestGridProjectRequestPrivate : public DeviceFarmRequestPrivate {

public:
    CreateTestGridProjectRequestPrivate(const DeviceFarmRequest::Action action,
                                   CreateTestGridProjectRequest * const q);
    CreateTestGridProjectRequestPrivate(const CreateTestGridProjectRequestPrivate &other,
                                   CreateTestGridProjectRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTestGridProjectRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
