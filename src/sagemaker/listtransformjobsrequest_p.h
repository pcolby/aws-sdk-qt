// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRANSFORMJOBSREQUEST_P_H
#define QTAWS_LISTTRANSFORMJOBSREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "listtransformjobsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListTransformJobsRequest;

class ListTransformJobsRequestPrivate : public SageMakerRequestPrivate {

public:
    ListTransformJobsRequestPrivate(const SageMakerRequest::Action action,
                                   ListTransformJobsRequest * const q);
    ListTransformJobsRequestPrivate(const ListTransformJobsRequestPrivate &other,
                                   ListTransformJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTransformJobsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
