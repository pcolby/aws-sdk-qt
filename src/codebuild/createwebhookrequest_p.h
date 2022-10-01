// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWEBHOOKREQUEST_P_H
#define QTAWS_CREATEWEBHOOKREQUEST_P_H

#include "codebuildrequest_p.h"
#include "createwebhookrequest.h"

namespace QtAws {
namespace CodeBuild {

class CreateWebhookRequest;

class CreateWebhookRequestPrivate : public CodeBuildRequestPrivate {

public:
    CreateWebhookRequestPrivate(const CodeBuildRequest::Action action,
                                   CreateWebhookRequest * const q);
    CreateWebhookRequestPrivate(const CreateWebhookRequestPrivate &other,
                                   CreateWebhookRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateWebhookRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
