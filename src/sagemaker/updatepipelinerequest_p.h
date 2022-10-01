// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPIPELINEREQUEST_P_H
#define QTAWS_UPDATEPIPELINEREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "updatepipelinerequest.h"

namespace QtAws {
namespace SageMaker {

class UpdatePipelineRequest;

class UpdatePipelineRequestPrivate : public SageMakerRequestPrivate {

public:
    UpdatePipelineRequestPrivate(const SageMakerRequest::Action action,
                                   UpdatePipelineRequest * const q);
    UpdatePipelineRequestPrivate(const UpdatePipelineRequestPrivate &other,
                                   UpdatePipelineRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdatePipelineRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
