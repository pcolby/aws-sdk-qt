// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPLABELINGJOBREQUEST_P_H
#define QTAWS_STOPLABELINGJOBREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "stoplabelingjobrequest.h"

namespace QtAws {
namespace SageMaker {

class StopLabelingJobRequest;

class StopLabelingJobRequestPrivate : public SageMakerRequestPrivate {

public:
    StopLabelingJobRequestPrivate(const SageMakerRequest::Action action,
                                   StopLabelingJobRequest * const q);
    StopLabelingJobRequestPrivate(const StopLabelingJobRequestPrivate &other,
                                   StopLabelingJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopLabelingJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
