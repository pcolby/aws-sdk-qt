// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTJOBSUCCESSRESULTREQUEST_P_H
#define QTAWS_PUTJOBSUCCESSRESULTREQUEST_P_H

#include "codepipelinerequest_p.h"
#include "putjobsuccessresultrequest.h"

namespace QtAws {
namespace CodePipeline {

class PutJobSuccessResultRequest;

class PutJobSuccessResultRequestPrivate : public CodePipelineRequestPrivate {

public:
    PutJobSuccessResultRequestPrivate(const CodePipelineRequest::Action action,
                                   PutJobSuccessResultRequest * const q);
    PutJobSuccessResultRequestPrivate(const PutJobSuccessResultRequestPrivate &other,
                                   PutJobSuccessResultRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutJobSuccessResultRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
