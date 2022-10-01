// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPIPELINEREQUEST_P_H
#define QTAWS_CREATEPIPELINEREQUEST_P_H

#include "codepipelinerequest_p.h"
#include "createpipelinerequest.h"

namespace QtAws {
namespace CodePipeline {

class CreatePipelineRequest;

class CreatePipelineRequestPrivate : public CodePipelineRequestPrivate {

public:
    CreatePipelineRequestPrivate(const CodePipelineRequest::Action action,
                                   CreatePipelineRequest * const q);
    CreatePipelineRequestPrivate(const CreatePipelineRequestPrivate &other,
                                   CreatePipelineRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePipelineRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
