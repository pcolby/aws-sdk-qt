// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPIPELINESTATEREQUEST_P_H
#define QTAWS_GETPIPELINESTATEREQUEST_P_H

#include "codepipelinerequest_p.h"
#include "getpipelinestaterequest.h"

namespace QtAws {
namespace CodePipeline {

class GetPipelineStateRequest;

class GetPipelineStateRequestPrivate : public CodePipelineRequestPrivate {

public:
    GetPipelineStateRequestPrivate(const CodePipelineRequest::Action action,
                                   GetPipelineStateRequest * const q);
    GetPipelineStateRequestPrivate(const GetPipelineStateRequestPrivate &other,
                                   GetPipelineStateRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPipelineStateRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
