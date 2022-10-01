// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPTRANSFORMJOBREQUEST_P_H
#define QTAWS_STOPTRANSFORMJOBREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "stoptransformjobrequest.h"

namespace QtAws {
namespace SageMaker {

class StopTransformJobRequest;

class StopTransformJobRequestPrivate : public SageMakerRequestPrivate {

public:
    StopTransformJobRequestPrivate(const SageMakerRequest::Action action,
                                   StopTransformJobRequest * const q);
    StopTransformJobRequestPrivate(const StopTransformJobRequestPrivate &other,
                                   StopTransformJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopTransformJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
