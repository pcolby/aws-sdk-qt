// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERWEBHOOKWITHTHIRDPARTYRESPONSE_P_H
#define QTAWS_DEREGISTERWEBHOOKWITHTHIRDPARTYRESPONSE_P_H

#include "codepipelineresponse_p.h"

namespace QtAws {
namespace CodePipeline {

class DeregisterWebhookWithThirdPartyResponse;

class DeregisterWebhookWithThirdPartyResponsePrivate : public CodePipelineResponsePrivate {

public:

    explicit DeregisterWebhookWithThirdPartyResponsePrivate(DeregisterWebhookWithThirdPartyResponse * const q);

    void parseDeregisterWebhookWithThirdPartyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeregisterWebhookWithThirdPartyResponse)
    Q_DISABLE_COPY(DeregisterWebhookWithThirdPartyResponsePrivate)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
