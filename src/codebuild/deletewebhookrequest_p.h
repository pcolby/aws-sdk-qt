// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWEBHOOKREQUEST_P_H
#define QTAWS_DELETEWEBHOOKREQUEST_P_H

#include "codebuildrequest_p.h"
#include "deletewebhookrequest.h"

namespace QtAws {
namespace CodeBuild {

class DeleteWebhookRequest;

class DeleteWebhookRequestPrivate : public CodeBuildRequestPrivate {

public:
    DeleteWebhookRequestPrivate(const CodeBuildRequest::Action action,
                                   DeleteWebhookRequest * const q);
    DeleteWebhookRequestPrivate(const DeleteWebhookRequestPrivate &other,
                                   DeleteWebhookRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteWebhookRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
