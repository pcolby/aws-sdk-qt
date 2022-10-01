// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACTIONEXECUTIONSRESPONSE_H
#define QTAWS_LISTACTIONEXECUTIONSRESPONSE_H

#include "codepipelineresponse.h"
#include "listactionexecutionsrequest.h"

namespace QtAws {
namespace CodePipeline {

class ListActionExecutionsResponsePrivate;

class QTAWSCODEPIPELINE_EXPORT ListActionExecutionsResponse : public CodePipelineResponse {
    Q_OBJECT

public:
    ListActionExecutionsResponse(const ListActionExecutionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListActionExecutionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListActionExecutionsResponse)
    Q_DISABLE_COPY(ListActionExecutionsResponse)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
