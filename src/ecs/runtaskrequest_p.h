// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RUNTASKREQUEST_P_H
#define QTAWS_RUNTASKREQUEST_P_H

#include "ecsrequest_p.h"
#include "runtaskrequest.h"

namespace QtAws {
namespace Ecs {

class RunTaskRequest;

class RunTaskRequestPrivate : public EcsRequestPrivate {

public:
    RunTaskRequestPrivate(const EcsRequest::Action action,
                                   RunTaskRequest * const q);
    RunTaskRequestPrivate(const RunTaskRequestPrivate &other,
                                   RunTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(RunTaskRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
