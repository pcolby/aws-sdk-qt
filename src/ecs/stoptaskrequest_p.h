// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPTASKREQUEST_P_H
#define QTAWS_STOPTASKREQUEST_P_H

#include "ecsrequest_p.h"
#include "stoptaskrequest.h"

namespace QtAws {
namespace Ecs {

class StopTaskRequest;

class StopTaskRequestPrivate : public EcsRequestPrivate {

public:
    StopTaskRequestPrivate(const EcsRequest::Action action,
                                   StopTaskRequest * const q);
    StopTaskRequestPrivate(const StopTaskRequestPrivate &other,
                                   StopTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopTaskRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
