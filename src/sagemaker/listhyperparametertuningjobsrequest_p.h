// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHYPERPARAMETERTUNINGJOBSREQUEST_P_H
#define QTAWS_LISTHYPERPARAMETERTUNINGJOBSREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "listhyperparametertuningjobsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListHyperParameterTuningJobsRequest;

class ListHyperParameterTuningJobsRequestPrivate : public SageMakerRequestPrivate {

public:
    ListHyperParameterTuningJobsRequestPrivate(const SageMakerRequest::Action action,
                                   ListHyperParameterTuningJobsRequest * const q);
    ListHyperParameterTuningJobsRequestPrivate(const ListHyperParameterTuningJobsRequestPrivate &other,
                                   ListHyperParameterTuningJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListHyperParameterTuningJobsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
