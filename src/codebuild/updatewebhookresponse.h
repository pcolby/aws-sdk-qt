// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWEBHOOKRESPONSE_H
#define QTAWS_UPDATEWEBHOOKRESPONSE_H

#include "codebuildresponse.h"
#include "updatewebhookrequest.h"

namespace QtAws {
namespace CodeBuild {

class UpdateWebhookResponsePrivate;

class QTAWSCODEBUILD_EXPORT UpdateWebhookResponse : public CodeBuildResponse {
    Q_OBJECT

public:
    UpdateWebhookResponse(const UpdateWebhookRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateWebhookRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateWebhookResponse)
    Q_DISABLE_COPY(UpdateWebhookResponse)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
