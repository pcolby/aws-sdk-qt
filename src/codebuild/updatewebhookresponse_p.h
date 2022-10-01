// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWEBHOOKRESPONSE_P_H
#define QTAWS_UPDATEWEBHOOKRESPONSE_P_H

#include "codebuildresponse_p.h"

namespace QtAws {
namespace CodeBuild {

class UpdateWebhookResponse;

class UpdateWebhookResponsePrivate : public CodeBuildResponsePrivate {

public:

    explicit UpdateWebhookResponsePrivate(UpdateWebhookResponse * const q);

    void parseUpdateWebhookResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateWebhookResponse)
    Q_DISABLE_COPY(UpdateWebhookResponsePrivate)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
