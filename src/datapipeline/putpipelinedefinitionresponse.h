// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPIPELINEDEFINITIONRESPONSE_H
#define QTAWS_PUTPIPELINEDEFINITIONRESPONSE_H

#include "datapipelineresponse.h"
#include "putpipelinedefinitionrequest.h"

namespace QtAws {
namespace DataPipeline {

class PutPipelineDefinitionResponsePrivate;

class QTAWSDATAPIPELINE_EXPORT PutPipelineDefinitionResponse : public DataPipelineResponse {
    Q_OBJECT

public:
    PutPipelineDefinitionResponse(const PutPipelineDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutPipelineDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutPipelineDefinitionResponse)
    Q_DISABLE_COPY(PutPipelineDefinitionResponse)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
