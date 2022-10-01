// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROJECTREQUEST_P_H
#define QTAWS_DELETEPROJECTREQUEST_P_H

#include "lookoutvisionrequest_p.h"
#include "deleteprojectrequest.h"

namespace QtAws {
namespace LookoutVision {

class DeleteProjectRequest;

class DeleteProjectRequestPrivate : public LookoutVisionRequestPrivate {

public:
    DeleteProjectRequestPrivate(const LookoutVisionRequest::Action action,
                                   DeleteProjectRequest * const q);
    DeleteProjectRequestPrivate(const DeleteProjectRequestPrivate &other,
                                   DeleteProjectRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteProjectRequest)

};

} // namespace LookoutVision
} // namespace QtAws

#endif
