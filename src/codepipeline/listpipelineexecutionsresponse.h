// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPIPELINEEXECUTIONSRESPONSE_H
#define QTAWS_LISTPIPELINEEXECUTIONSRESPONSE_H

#include "codepipelineresponse.h"
#include "listpipelineexecutionsrequest.h"

namespace QtAws {
namespace CodePipeline {

class ListPipelineExecutionsResponsePrivate;

class QTAWSCODEPIPELINE_EXPORT ListPipelineExecutionsResponse : public CodePipelineResponse {
    Q_OBJECT

public:
    ListPipelineExecutionsResponse(const ListPipelineExecutionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPipelineExecutionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPipelineExecutionsResponse)
    Q_DISABLE_COPY(ListPipelineExecutionsResponse)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
