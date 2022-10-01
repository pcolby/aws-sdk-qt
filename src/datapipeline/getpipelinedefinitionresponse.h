// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPIPELINEDEFINITIONRESPONSE_H
#define QTAWS_GETPIPELINEDEFINITIONRESPONSE_H

#include "datapipelineresponse.h"
#include "getpipelinedefinitionrequest.h"

namespace QtAws {
namespace DataPipeline {

class GetPipelineDefinitionResponsePrivate;

class QTAWSDATAPIPELINE_EXPORT GetPipelineDefinitionResponse : public DataPipelineResponse {
    Q_OBJECT

public:
    GetPipelineDefinitionResponse(const GetPipelineDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetPipelineDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPipelineDefinitionResponse)
    Q_DISABLE_COPY(GetPipelineDefinitionResponse)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
