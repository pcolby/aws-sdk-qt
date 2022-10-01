// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTJOBFAILURERESULTREQUEST_P_H
#define QTAWS_PUTJOBFAILURERESULTREQUEST_P_H

#include "codepipelinerequest_p.h"
#include "putjobfailureresultrequest.h"

namespace QtAws {
namespace CodePipeline {

class PutJobFailureResultRequest;

class PutJobFailureResultRequestPrivate : public CodePipelineRequestPrivate {

public:
    PutJobFailureResultRequestPrivate(const CodePipelineRequest::Action action,
                                   PutJobFailureResultRequest * const q);
    PutJobFailureResultRequestPrivate(const PutJobFailureResultRequestPrivate &other,
                                   PutJobFailureResultRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutJobFailureResultRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
