// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROJECTREQUEST_P_H
#define QTAWS_UPDATEPROJECTREQUEST_P_H

#include "mobilerequest_p.h"
#include "updateprojectrequest.h"

namespace QtAws {
namespace Mobile {

class UpdateProjectRequest;

class UpdateProjectRequestPrivate : public MobileRequestPrivate {

public:
    UpdateProjectRequestPrivate(const MobileRequest::Action action,
                                   UpdateProjectRequest * const q);
    UpdateProjectRequestPrivate(const UpdateProjectRequestPrivate &other,
                                   UpdateProjectRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateProjectRequest)

};

} // namespace Mobile
} // namespace QtAws

#endif
