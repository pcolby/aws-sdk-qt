// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLESTAGETRANSITIONREQUEST_P_H
#define QTAWS_DISABLESTAGETRANSITIONREQUEST_P_H

#include "codepipelinerequest_p.h"
#include "disablestagetransitionrequest.h"

namespace QtAws {
namespace CodePipeline {

class DisableStageTransitionRequest;

class DisableStageTransitionRequestPrivate : public CodePipelineRequestPrivate {

public:
    DisableStageTransitionRequestPrivate(const CodePipelineRequest::Action action,
                                   DisableStageTransitionRequest * const q);
    DisableStageTransitionRequestPrivate(const DisableStageTransitionRequestPrivate &other,
                                   DisableStageTransitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableStageTransitionRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
