// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXECUTECOMMANDREQUEST_P_H
#define QTAWS_EXECUTECOMMANDREQUEST_P_H

#include "ecsrequest_p.h"
#include "executecommandrequest.h"

namespace QtAws {
namespace Ecs {

class ExecuteCommandRequest;

class ExecuteCommandRequestPrivate : public EcsRequestPrivate {

public:
    ExecuteCommandRequestPrivate(const EcsRequest::Action action,
                                   ExecuteCommandRequest * const q);
    ExecuteCommandRequestPrivate(const ExecuteCommandRequestPrivate &other,
                                   ExecuteCommandRequest * const q);

private:
    Q_DECLARE_PUBLIC(ExecuteCommandRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
