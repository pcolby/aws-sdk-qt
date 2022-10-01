// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROJECTREQUEST_P_H
#define QTAWS_DELETEPROJECTREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "deleteprojectrequest.h"

namespace QtAws {
namespace DeviceFarm {

class DeleteProjectRequest;

class DeleteProjectRequestPrivate : public DeviceFarmRequestPrivate {

public:
    DeleteProjectRequestPrivate(const DeviceFarmRequest::Action action,
                                   DeleteProjectRequest * const q);
    DeleteProjectRequestPrivate(const DeleteProjectRequestPrivate &other,
                                   DeleteProjectRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteProjectRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
