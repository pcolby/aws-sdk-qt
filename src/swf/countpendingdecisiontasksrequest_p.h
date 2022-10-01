// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COUNTPENDINGDECISIONTASKSREQUEST_P_H
#define QTAWS_COUNTPENDINGDECISIONTASKSREQUEST_P_H

#include "swfrequest_p.h"
#include "countpendingdecisiontasksrequest.h"

namespace QtAws {
namespace Swf {

class CountPendingDecisionTasksRequest;

class CountPendingDecisionTasksRequestPrivate : public SwfRequestPrivate {

public:
    CountPendingDecisionTasksRequestPrivate(const SwfRequest::Action action,
                                   CountPendingDecisionTasksRequest * const q);
    CountPendingDecisionTasksRequestPrivate(const CountPendingDecisionTasksRequestPrivate &other,
                                   CountPendingDecisionTasksRequest * const q);

private:
    Q_DECLARE_PUBLIC(CountPendingDecisionTasksRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
