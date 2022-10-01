// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLESTAGETRANSITIONREQUEST_P_H
#define QTAWS_ENABLESTAGETRANSITIONREQUEST_P_H

#include "codepipelinerequest_p.h"
#include "enablestagetransitionrequest.h"

namespace QtAws {
namespace CodePipeline {

class EnableStageTransitionRequest;

class EnableStageTransitionRequestPrivate : public CodePipelineRequestPrivate {

public:
    EnableStageTransitionRequestPrivate(const CodePipelineRequest::Action action,
                                   EnableStageTransitionRequest * const q);
    EnableStageTransitionRequestPrivate(const EnableStageTransitionRequestPrivate &other,
                                   EnableStageTransitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableStageTransitionRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
