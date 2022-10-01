// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACTIONREVISIONREQUEST_P_H
#define QTAWS_PUTACTIONREVISIONREQUEST_P_H

#include "codepipelinerequest_p.h"
#include "putactionrevisionrequest.h"

namespace QtAws {
namespace CodePipeline {

class PutActionRevisionRequest;

class PutActionRevisionRequestPrivate : public CodePipelineRequestPrivate {

public:
    PutActionRevisionRequestPrivate(const CodePipelineRequest::Action action,
                                   PutActionRevisionRequest * const q);
    PutActionRevisionRequestPrivate(const PutActionRevisionRequestPrivate &other,
                                   PutActionRevisionRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutActionRevisionRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
