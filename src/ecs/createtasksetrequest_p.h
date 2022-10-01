// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETASKSETREQUEST_P_H
#define QTAWS_CREATETASKSETREQUEST_P_H

#include "ecsrequest_p.h"
#include "createtasksetrequest.h"

namespace QtAws {
namespace Ecs {

class CreateTaskSetRequest;

class CreateTaskSetRequestPrivate : public EcsRequestPrivate {

public:
    CreateTaskSetRequestPrivate(const EcsRequest::Action action,
                                   CreateTaskSetRequest * const q);
    CreateTaskSetRequestPrivate(const CreateTaskSetRequestPrivate &other,
                                   CreateTaskSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTaskSetRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
