// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACKNOWLEDGETHIRDPARTYJOBREQUEST_P_H
#define QTAWS_ACKNOWLEDGETHIRDPARTYJOBREQUEST_P_H

#include "codepipelinerequest_p.h"
#include "acknowledgethirdpartyjobrequest.h"

namespace QtAws {
namespace CodePipeline {

class AcknowledgeThirdPartyJobRequest;

class AcknowledgeThirdPartyJobRequestPrivate : public CodePipelineRequestPrivate {

public:
    AcknowledgeThirdPartyJobRequestPrivate(const CodePipelineRequest::Action action,
                                   AcknowledgeThirdPartyJobRequest * const q);
    AcknowledgeThirdPartyJobRequestPrivate(const AcknowledgeThirdPartyJobRequestPrivate &other,
                                   AcknowledgeThirdPartyJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(AcknowledgeThirdPartyJobRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
