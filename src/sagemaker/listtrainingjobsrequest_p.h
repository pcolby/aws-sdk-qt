// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRAININGJOBSREQUEST_P_H
#define QTAWS_LISTTRAININGJOBSREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "listtrainingjobsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListTrainingJobsRequest;

class ListTrainingJobsRequestPrivate : public SageMakerRequestPrivate {

public:
    ListTrainingJobsRequestPrivate(const SageMakerRequest::Action action,
                                   ListTrainingJobsRequest * const q);
    ListTrainingJobsRequestPrivate(const ListTrainingJobsRequestPrivate &other,
                                   ListTrainingJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTrainingJobsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
