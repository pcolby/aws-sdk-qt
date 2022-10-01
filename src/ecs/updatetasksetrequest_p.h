// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETASKSETREQUEST_P_H
#define QTAWS_UPDATETASKSETREQUEST_P_H

#include "ecsrequest_p.h"
#include "updatetasksetrequest.h"

namespace QtAws {
namespace Ecs {

class UpdateTaskSetRequest;

class UpdateTaskSetRequestPrivate : public EcsRequestPrivate {

public:
    UpdateTaskSetRequestPrivate(const EcsRequest::Action action,
                                   UpdateTaskSetRequest * const q);
    UpdateTaskSetRequestPrivate(const UpdateTaskSetRequestPrivate &other,
                                   UpdateTaskSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateTaskSetRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
