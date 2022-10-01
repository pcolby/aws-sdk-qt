// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWEBHOOKRESPONSE_H
#define QTAWS_DELETEWEBHOOKRESPONSE_H

#include "codepipelineresponse.h"
#include "deletewebhookrequest.h"

namespace QtAws {
namespace CodePipeline {

class DeleteWebhookResponsePrivate;

class QTAWSCODEPIPELINE_EXPORT DeleteWebhookResponse : public CodePipelineResponse {
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

} // namespace CodePipeline
} // namespace QtAws

#endif
