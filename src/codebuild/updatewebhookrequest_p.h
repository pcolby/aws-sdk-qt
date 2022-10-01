// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWEBHOOKREQUEST_P_H
#define QTAWS_UPDATEWEBHOOKREQUEST_P_H

#include "codebuildrequest_p.h"
#include "updatewebhookrequest.h"

namespace QtAws {
namespace CodeBuild {

class UpdateWebhookRequest;

class UpdateWebhookRequestPrivate : public CodeBuildRequestPrivate {

public:
    UpdateWebhookRequestPrivate(const CodeBuildRequest::Action action,
                                   UpdateWebhookRequest * const q);
    UpdateWebhookRequestPrivate(const UpdateWebhookRequestPrivate &other,
                                   UpdateWebhookRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateWebhookRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
