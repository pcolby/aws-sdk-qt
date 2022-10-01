// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERWEBHOOKWITHTHIRDPARTYREQUEST_P_H
#define QTAWS_REGISTERWEBHOOKWITHTHIRDPARTYREQUEST_P_H

#include "codepipelinerequest_p.h"
#include "registerwebhookwiththirdpartyrequest.h"

namespace QtAws {
namespace CodePipeline {

class RegisterWebhookWithThirdPartyRequest;

class RegisterWebhookWithThirdPartyRequestPrivate : public CodePipelineRequestPrivate {

public:
    RegisterWebhookWithThirdPartyRequestPrivate(const CodePipelineRequest::Action action,
                                   RegisterWebhookWithThirdPartyRequest * const q);
    RegisterWebhookWithThirdPartyRequestPrivate(const RegisterWebhookWithThirdPartyRequestPrivate &other,
                                   RegisterWebhookWithThirdPartyRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterWebhookWithThirdPartyRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
