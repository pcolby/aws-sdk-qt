// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTTASKREQUEST_P_H
#define QTAWS_STARTTASKREQUEST_P_H

#include "ecsrequest_p.h"
#include "starttaskrequest.h"

namespace QtAws {
namespace Ecs {

class StartTaskRequest;

class StartTaskRequestPrivate : public EcsRequestPrivate {

public:
    StartTaskRequestPrivate(const EcsRequest::Action action,
                                   StartTaskRequest * const q);
    StartTaskRequestPrivate(const StartTaskRequestPrivate &other,
                                   StartTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartTaskRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
