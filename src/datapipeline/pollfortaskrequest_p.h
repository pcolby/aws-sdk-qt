// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POLLFORTASKREQUEST_P_H
#define QTAWS_POLLFORTASKREQUEST_P_H

#include "datapipelinerequest_p.h"
#include "pollfortaskrequest.h"

namespace QtAws {
namespace DataPipeline {

class PollForTaskRequest;

class PollForTaskRequestPrivate : public DataPipelineRequestPrivate {

public:
    PollForTaskRequestPrivate(const DataPipelineRequest::Action action,
                                   PollForTaskRequest * const q);
    PollForTaskRequestPrivate(const PollForTaskRequestPrivate &other,
                                   PollForTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(PollForTaskRequest)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
