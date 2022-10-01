// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACKNOWLEDGEJOBREQUEST_P_H
#define QTAWS_ACKNOWLEDGEJOBREQUEST_P_H

#include "codepipelinerequest_p.h"
#include "acknowledgejobrequest.h"

namespace QtAws {
namespace CodePipeline {

class AcknowledgeJobRequest;

class AcknowledgeJobRequestPrivate : public CodePipelineRequestPrivate {

public:
    AcknowledgeJobRequestPrivate(const CodePipelineRequest::Action action,
                                   AcknowledgeJobRequest * const q);
    AcknowledgeJobRequestPrivate(const AcknowledgeJobRequestPrivate &other,
                                   AcknowledgeJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(AcknowledgeJobRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
