// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERWEBHOOKWITHTHIRDPARTYRESPONSE_H
#define QTAWS_REGISTERWEBHOOKWITHTHIRDPARTYRESPONSE_H

#include "codepipelineresponse.h"
#include "registerwebhookwiththirdpartyrequest.h"

namespace QtAws {
namespace CodePipeline {

class RegisterWebhookWithThirdPartyResponsePrivate;

class QTAWSCODEPIPELINE_EXPORT RegisterWebhookWithThirdPartyResponse : public CodePipelineResponse {
    Q_OBJECT

public:
    RegisterWebhookWithThirdPartyResponse(const RegisterWebhookWithThirdPartyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterWebhookWithThirdPartyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterWebhookWithThirdPartyResponse)
    Q_DISABLE_COPY(RegisterWebhookWithThirdPartyResponse)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
