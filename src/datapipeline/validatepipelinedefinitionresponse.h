// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VALIDATEPIPELINEDEFINITIONRESPONSE_H
#define QTAWS_VALIDATEPIPELINEDEFINITIONRESPONSE_H

#include "datapipelineresponse.h"
#include "validatepipelinedefinitionrequest.h"

namespace QtAws {
namespace DataPipeline {

class ValidatePipelineDefinitionResponsePrivate;

class QTAWSDATAPIPELINE_EXPORT ValidatePipelineDefinitionResponse : public DataPipelineResponse {
    Q_OBJECT

public:
    ValidatePipelineDefinitionResponse(const ValidatePipelineDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ValidatePipelineDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ValidatePipelineDefinitionResponse)
    Q_DISABLE_COPY(ValidatePipelineDefinitionResponse)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
