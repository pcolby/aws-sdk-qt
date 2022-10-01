// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSCHEDULINGPOLICIESREQUEST_P_H
#define QTAWS_LISTSCHEDULINGPOLICIESREQUEST_P_H

#include "batchrequest_p.h"
#include "listschedulingpoliciesrequest.h"

namespace QtAws {
namespace Batch {

class ListSchedulingPoliciesRequest;

class ListSchedulingPoliciesRequestPrivate : public BatchRequestPrivate {

public:
    ListSchedulingPoliciesRequestPrivate(const BatchRequest::Action action,
                                   ListSchedulingPoliciesRequest * const q);
    ListSchedulingPoliciesRequestPrivate(const ListSchedulingPoliciesRequestPrivate &other,
                                   ListSchedulingPoliciesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSchedulingPoliciesRequest)

};

} // namespace Batch
} // namespace QtAws

#endif
