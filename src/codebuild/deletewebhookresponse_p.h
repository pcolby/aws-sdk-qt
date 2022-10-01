// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWEBHOOKRESPONSE_P_H
#define QTAWS_DELETEWEBHOOKRESPONSE_P_H

#include "codebuildresponse_p.h"

namespace QtAws {
namespace CodeBuild {

class DeleteWebhookResponse;

class DeleteWebhookResponsePrivate : public CodeBuildResponsePrivate {

public:

    explicit DeleteWebhookResponsePrivate(DeleteWebhookResponse * const q);

    void parseDeleteWebhookResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteWebhookResponse)
    Q_DISABLE_COPY(DeleteWebhookResponsePrivate)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
