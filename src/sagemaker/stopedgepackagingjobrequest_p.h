// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPEDGEPACKAGINGJOBREQUEST_P_H
#define QTAWS_STOPEDGEPACKAGINGJOBREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "stopedgepackagingjobrequest.h"

namespace QtAws {
namespace SageMaker {

class StopEdgePackagingJobRequest;

class StopEdgePackagingJobRequestPrivate : public SageMakerRequestPrivate {

public:
    StopEdgePackagingJobRequestPrivate(const SageMakerRequest::Action action,
                                   StopEdgePackagingJobRequest * const q);
    StopEdgePackagingJobRequestPrivate(const StopEdgePackagingJobRequestPrivate &other,
                                   StopEdgePackagingJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopEdgePackagingJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
