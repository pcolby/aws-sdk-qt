// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POLLFORTHIRDPARTYJOBSREQUEST_P_H
#define QTAWS_POLLFORTHIRDPARTYJOBSREQUEST_P_H

#include "codepipelinerequest_p.h"
#include "pollforthirdpartyjobsrequest.h"

namespace QtAws {
namespace CodePipeline {

class PollForThirdPartyJobsRequest;

class PollForThirdPartyJobsRequestPrivate : public CodePipelineRequestPrivate {

public:
    PollForThirdPartyJobsRequestPrivate(const CodePipelineRequest::Action action,
                                   PollForThirdPartyJobsRequest * const q);
    PollForThirdPartyJobsRequestPrivate(const PollForThirdPartyJobsRequestPrivate &other,
                                   PollForThirdPartyJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(PollForThirdPartyJobsRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
