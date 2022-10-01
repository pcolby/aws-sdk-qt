// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTWEBHOOKREQUEST_P_H
#define QTAWS_PUTWEBHOOKREQUEST_P_H

#include "codepipelinerequest_p.h"
#include "putwebhookrequest.h"

namespace QtAws {
namespace CodePipeline {

class PutWebhookRequest;

class PutWebhookRequestPrivate : public CodePipelineRequestPrivate {

public:
    PutWebhookRequestPrivate(const CodePipelineRequest::Action action,
                                   PutWebhookRequest * const q);
    PutWebhookRequestPrivate(const PutWebhookRequestPrivate &other,
                                   PutWebhookRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutWebhookRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
