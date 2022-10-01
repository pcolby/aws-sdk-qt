// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWEBHOOKRESPONSE_H
#define QTAWS_CREATEWEBHOOKRESPONSE_H

#include "codebuildresponse.h"
#include "createwebhookrequest.h"

namespace QtAws {
namespace CodeBuild {

class CreateWebhookResponsePrivate;

class QTAWSCODEBUILD_EXPORT CreateWebhookResponse : public CodeBuildResponse {
    Q_OBJECT

public:
    CreateWebhookResponse(const CreateWebhookRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateWebhookRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWebhookResponse)
    Q_DISABLE_COPY(CreateWebhookResponse)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
