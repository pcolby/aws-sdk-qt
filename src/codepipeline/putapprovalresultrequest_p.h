// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTAPPROVALRESULTREQUEST_P_H
#define QTAWS_PUTAPPROVALRESULTREQUEST_P_H

#include "codepipelinerequest_p.h"
#include "putapprovalresultrequest.h"

namespace QtAws {
namespace CodePipeline {

class PutApprovalResultRequest;

class PutApprovalResultRequestPrivate : public CodePipelineRequestPrivate {

public:
    PutApprovalResultRequestPrivate(const CodePipelineRequest::Action action,
                                   PutApprovalResultRequest * const q);
    PutApprovalResultRequestPrivate(const PutApprovalResultRequestPrivate &other,
                                   PutApprovalResultRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutApprovalResultRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
