// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROJECTREQUEST_P_H
#define QTAWS_CREATEPROJECTREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "createprojectrequest.h"

namespace QtAws {
namespace DeviceFarm {

class CreateProjectRequest;

class CreateProjectRequestPrivate : public DeviceFarmRequestPrivate {

public:
    CreateProjectRequestPrivate(const DeviceFarmRequest::Action action,
                                   CreateProjectRequest * const q);
    CreateProjectRequestPrivate(const CreateProjectRequestPrivate &other,
                                   CreateProjectRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateProjectRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
