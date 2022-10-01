// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTASKSREQUEST_P_H
#define QTAWS_LISTTASKSREQUEST_P_H

#include "ecsrequest_p.h"
#include "listtasksrequest.h"

namespace QtAws {
namespace Ecs {

class ListTasksRequest;

class ListTasksRequestPrivate : public EcsRequestPrivate {

public:
    ListTasksRequestPrivate(const EcsRequest::Action action,
                                   ListTasksRequest * const q);
    ListTasksRequestPrivate(const ListTasksRequestPrivate &other,
                                   ListTasksRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTasksRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
