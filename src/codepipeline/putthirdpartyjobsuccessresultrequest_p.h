// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTTHIRDPARTYJOBSUCCESSRESULTREQUEST_P_H
#define QTAWS_PUTTHIRDPARTYJOBSUCCESSRESULTREQUEST_P_H

#include "codepipelinerequest_p.h"
#include "putthirdpartyjobsuccessresultrequest.h"

namespace QtAws {
namespace CodePipeline {

class PutThirdPartyJobSuccessResultRequest;

class PutThirdPartyJobSuccessResultRequestPrivate : public CodePipelineRequestPrivate {

public:
    PutThirdPartyJobSuccessResultRequestPrivate(const CodePipelineRequest::Action action,
                                   PutThirdPartyJobSuccessResultRequest * const q);
    PutThirdPartyJobSuccessResultRequestPrivate(const PutThirdPartyJobSuccessResultRequestPrivate &other,
                                   PutThirdPartyJobSuccessResultRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutThirdPartyJobSuccessResultRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
