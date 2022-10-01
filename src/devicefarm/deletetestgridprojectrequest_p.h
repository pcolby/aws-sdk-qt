// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETESTGRIDPROJECTREQUEST_P_H
#define QTAWS_DELETETESTGRIDPROJECTREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "deletetestgridprojectrequest.h"

namespace QtAws {
namespace DeviceFarm {

class DeleteTestGridProjectRequest;

class DeleteTestGridProjectRequestPrivate : public DeviceFarmRequestPrivate {

public:
    DeleteTestGridProjectRequestPrivate(const DeviceFarmRequest::Action action,
                                   DeleteTestGridProjectRequest * const q);
    DeleteTestGridProjectRequestPrivate(const DeleteTestGridProjectRequestPrivate &other,
                                   DeleteTestGridProjectRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTestGridProjectRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
