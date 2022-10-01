// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTJOBRUNSREQUEST_P_H
#define QTAWS_LISTJOBRUNSREQUEST_P_H

#include "emrcontainersrequest_p.h"
#include "listjobrunsrequest.h"

namespace QtAws {
namespace Emrcontainers {

class ListJobRunsRequest;

class ListJobRunsRequestPrivate : public EmrcontainersRequestPrivate {

public:
    ListJobRunsRequestPrivate(const EmrcontainersRequest::Action action,
                                   ListJobRunsRequest * const q);
    ListJobRunsRequestPrivate(const ListJobRunsRequestPrivate &other,
                                   ListJobRunsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListJobRunsRequest)

};

} // namespace Emrcontainers
} // namespace QtAws

#endif
