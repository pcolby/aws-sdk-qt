// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERWEBHOOKWITHTHIRDPARTYREQUEST_H
#define QTAWS_DEREGISTERWEBHOOKWITHTHIRDPARTYREQUEST_H

#include "codepipelinerequest.h"

namespace QtAws {
namespace CodePipeline {

class DeregisterWebhookWithThirdPartyRequestPrivate;

class QTAWSCODEPIPELINE_EXPORT DeregisterWebhookWithThirdPartyRequest : public CodePipelineRequest {

public:
    DeregisterWebhookWithThirdPartyRequest(const DeregisterWebhookWithThirdPartyRequest &other);
    DeregisterWebhookWithThirdPartyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterWebhookWithThirdPartyRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
