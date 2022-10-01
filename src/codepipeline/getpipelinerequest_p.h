// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPIPELINEREQUEST_P_H
#define QTAWS_GETPIPELINEREQUEST_P_H

#include "codepipelinerequest_p.h"
#include "getpipelinerequest.h"

namespace QtAws {
namespace CodePipeline {

class GetPipelineRequest;

class GetPipelineRequestPrivate : public CodePipelineRequestPrivate {

public:
    GetPipelineRequestPrivate(const CodePipelineRequest::Action action,
                                   GetPipelineRequest * const q);
    GetPipelineRequestPrivate(const GetPipelineRequestPrivate &other,
                                   GetPipelineRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPipelineRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
