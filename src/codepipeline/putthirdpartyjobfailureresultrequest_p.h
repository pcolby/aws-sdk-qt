// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTTHIRDPARTYJOBFAILURERESULTREQUEST_P_H
#define QTAWS_PUTTHIRDPARTYJOBFAILURERESULTREQUEST_P_H

#include "codepipelinerequest_p.h"
#include "putthirdpartyjobfailureresultrequest.h"

namespace QtAws {
namespace CodePipeline {

class PutThirdPartyJobFailureResultRequest;

class PutThirdPartyJobFailureResultRequestPrivate : public CodePipelineRequestPrivate {

public:
    PutThirdPartyJobFailureResultRequestPrivate(const CodePipelineRequest::Action action,
                                   PutThirdPartyJobFailureResultRequest * const q);
    PutThirdPartyJobFailureResultRequestPrivate(const PutThirdPartyJobFailureResultRequestPrivate &other,
                                   PutThirdPartyJobFailureResultRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutThirdPartyJobFailureResultRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
