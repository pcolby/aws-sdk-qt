// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEDGEPACKAGINGJOBREQUEST_P_H
#define QTAWS_CREATEEDGEPACKAGINGJOBREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "createedgepackagingjobrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateEdgePackagingJobRequest;

class CreateEdgePackagingJobRequestPrivate : public SageMakerRequestPrivate {

public:
    CreateEdgePackagingJobRequestPrivate(const SageMakerRequest::Action action,
                                   CreateEdgePackagingJobRequest * const q);
    CreateEdgePackagingJobRequestPrivate(const CreateEdgePackagingJobRequestPrivate &other,
                                   CreateEdgePackagingJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateEdgePackagingJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
