// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COUNTPENDINGACTIVITYTASKSREQUEST_P_H
#define QTAWS_COUNTPENDINGACTIVITYTASKSREQUEST_P_H

#include "swfrequest_p.h"
#include "countpendingactivitytasksrequest.h"

namespace QtAws {
namespace Swf {

class CountPendingActivityTasksRequest;

class CountPendingActivityTasksRequestPrivate : public SwfRequestPrivate {

public:
    CountPendingActivityTasksRequestPrivate(const SwfRequest::Action action,
                                   CountPendingActivityTasksRequest * const q);
    CountPendingActivityTasksRequestPrivate(const CountPendingActivityTasksRequestPrivate &other,
                                   CountPendingActivityTasksRequest * const q);

private:
    Q_DECLARE_PUBLIC(CountPendingActivityTasksRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
