// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELABELINGJOBREQUEST_P_H
#define QTAWS_DESCRIBELABELINGJOBREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "describelabelingjobrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeLabelingJobRequest;

class DescribeLabelingJobRequestPrivate : public SageMakerRequestPrivate {

public:
    DescribeLabelingJobRequestPrivate(const SageMakerRequest::Action action,
                                   DescribeLabelingJobRequest * const q);
    DescribeLabelingJobRequestPrivate(const DescribeLabelingJobRequestPrivate &other,
                                   DescribeLabelingJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLabelingJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
