// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWEBHOOKREQUEST_P_H
#define QTAWS_DELETEWEBHOOKREQUEST_P_H

#include "codepipelinerequest_p.h"
#include "deletewebhookrequest.h"

namespace QtAws {
namespace CodePipeline {

class DeleteWebhookRequest;

class DeleteWebhookRequestPrivate : public CodePipelineRequestPrivate {

public:
    DeleteWebhookRequestPrivate(const CodePipelineRequest::Action action,
                                   DeleteWebhookRequest * const q);
    DeleteWebhookRequestPrivate(const DeleteWebhookRequestPrivate &other,
                                   DeleteWebhookRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteWebhookRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
