// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POLLFORJOBSREQUEST_P_H
#define QTAWS_POLLFORJOBSREQUEST_P_H

#include "codepipelinerequest_p.h"
#include "pollforjobsrequest.h"

namespace QtAws {
namespace CodePipeline {

class PollForJobsRequest;

class PollForJobsRequestPrivate : public CodePipelineRequestPrivate {

public:
    PollForJobsRequestPrivate(const CodePipelineRequest::Action action,
                                   PollForJobsRequest * const q);
    PollForJobsRequestPrivate(const PollForJobsRequestPrivate &other,
                                   PollForJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(PollForJobsRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
