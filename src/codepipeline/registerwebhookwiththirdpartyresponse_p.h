// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERWEBHOOKWITHTHIRDPARTYRESPONSE_P_H
#define QTAWS_REGISTERWEBHOOKWITHTHIRDPARTYRESPONSE_P_H

#include "codepipelineresponse_p.h"

namespace QtAws {
namespace CodePipeline {

class RegisterWebhookWithThirdPartyResponse;

class RegisterWebhookWithThirdPartyResponsePrivate : public CodePipelineResponsePrivate {

public:

    explicit RegisterWebhookWithThirdPartyResponsePrivate(RegisterWebhookWithThirdPartyResponse * const q);

    void parseRegisterWebhookWithThirdPartyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterWebhookWithThirdPartyResponse)
    Q_DISABLE_COPY(RegisterWebhookWithThirdPartyResponsePrivate)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
