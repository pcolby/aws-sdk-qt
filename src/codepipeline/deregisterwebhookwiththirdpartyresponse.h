// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERWEBHOOKWITHTHIRDPARTYRESPONSE_H
#define QTAWS_DEREGISTERWEBHOOKWITHTHIRDPARTYRESPONSE_H

#include "codepipelineresponse.h"
#include "deregisterwebhookwiththirdpartyrequest.h"

namespace QtAws {
namespace CodePipeline {

class DeregisterWebhookWithThirdPartyResponsePrivate;

class QTAWSCODEPIPELINE_EXPORT DeregisterWebhookWithThirdPartyResponse : public CodePipelineResponse {
    Q_OBJECT

public:
    DeregisterWebhookWithThirdPartyResponse(const DeregisterWebhookWithThirdPartyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeregisterWebhookWithThirdPartyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterWebhookWithThirdPartyResponse)
    Q_DISABLE_COPY(DeregisterWebhookWithThirdPartyResponse)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
