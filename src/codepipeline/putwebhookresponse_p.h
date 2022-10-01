// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTWEBHOOKRESPONSE_P_H
#define QTAWS_PUTWEBHOOKRESPONSE_P_H

#include "codepipelineresponse_p.h"

namespace QtAws {
namespace CodePipeline {

class PutWebhookResponse;

class PutWebhookResponsePrivate : public CodePipelineResponsePrivate {

public:

    explicit PutWebhookResponsePrivate(PutWebhookResponse * const q);

    void parsePutWebhookResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutWebhookResponse)
    Q_DISABLE_COPY(PutWebhookResponsePrivate)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
