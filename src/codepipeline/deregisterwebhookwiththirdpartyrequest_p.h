// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERWEBHOOKWITHTHIRDPARTYREQUEST_P_H
#define QTAWS_DEREGISTERWEBHOOKWITHTHIRDPARTYREQUEST_P_H

#include "codepipelinerequest_p.h"
#include "deregisterwebhookwiththirdpartyrequest.h"

namespace QtAws {
namespace CodePipeline {

class DeregisterWebhookWithThirdPartyRequest;

class DeregisterWebhookWithThirdPartyRequestPrivate : public CodePipelineRequestPrivate {

public:
    DeregisterWebhookWithThirdPartyRequestPrivate(const CodePipelineRequest::Action action,
                                   DeregisterWebhookWithThirdPartyRequest * const q);
    DeregisterWebhookWithThirdPartyRequestPrivate(const DeregisterWebhookWithThirdPartyRequestPrivate &other,
                                   DeregisterWebhookWithThirdPartyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeregisterWebhookWithThirdPartyRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
