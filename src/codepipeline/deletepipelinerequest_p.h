// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPIPELINEREQUEST_P_H
#define QTAWS_DELETEPIPELINEREQUEST_P_H

#include "codepipelinerequest_p.h"
#include "deletepipelinerequest.h"

namespace QtAws {
namespace CodePipeline {

class DeletePipelineRequest;

class DeletePipelineRequestPrivate : public CodePipelineRequestPrivate {

public:
    DeletePipelineRequestPrivate(const CodePipelineRequest::Action action,
                                   DeletePipelineRequest * const q);
    DeletePipelineRequestPrivate(const DeletePipelineRequestPrivate &other,
                                   DeletePipelineRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePipelineRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
