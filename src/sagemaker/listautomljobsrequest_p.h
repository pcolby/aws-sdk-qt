// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAUTOMLJOBSREQUEST_P_H
#define QTAWS_LISTAUTOMLJOBSREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "listautomljobsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListAutoMLJobsRequest;

class ListAutoMLJobsRequestPrivate : public SageMakerRequestPrivate {

public:
    ListAutoMLJobsRequestPrivate(const SageMakerRequest::Action action,
                                   ListAutoMLJobsRequest * const q);
    ListAutoMLJobsRequestPrivate(const ListAutoMLJobsRequestPrivate &other,
                                   ListAutoMLJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAutoMLJobsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
