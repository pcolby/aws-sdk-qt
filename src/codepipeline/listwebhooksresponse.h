// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWEBHOOKSRESPONSE_H
#define QTAWS_LISTWEBHOOKSRESPONSE_H

#include "codepipelineresponse.h"
#include "listwebhooksrequest.h"

namespace QtAws {
namespace CodePipeline {

class ListWebhooksResponsePrivate;

class QTAWSCODEPIPELINE_EXPORT ListWebhooksResponse : public CodePipelineResponse {
    Q_OBJECT

public:
    ListWebhooksResponse(const ListWebhooksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListWebhooksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListWebhooksResponse)
    Q_DISABLE_COPY(ListWebhooksResponse)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
