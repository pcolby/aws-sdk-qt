// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWEBHOOKRESPONSE_H
#define QTAWS_DELETEWEBHOOKRESPONSE_H

#include "codebuildresponse.h"
#include "deletewebhookrequest.h"

namespace QtAws {
namespace CodeBuild {

class DeleteWebhookResponsePrivate;

class QTAWSCODEBUILD_EXPORT DeleteWebhookResponse : public CodeBuildResponse {
    Q_OBJECT

public:
    DeleteWebhookResponse(const DeleteWebhookRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteWebhookRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteWebhookResponse)
    Q_DISABLE_COPY(DeleteWebhookResponse)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
