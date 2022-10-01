// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VALIDATEPIPELINEDEFINITIONRESPONSE_P_H
#define QTAWS_VALIDATEPIPELINEDEFINITIONRESPONSE_P_H

#include "datapipelineresponse_p.h"

namespace QtAws {
namespace DataPipeline {

class ValidatePipelineDefinitionResponse;

class ValidatePipelineDefinitionResponsePrivate : public DataPipelineResponsePrivate {

public:

    explicit ValidatePipelineDefinitionResponsePrivate(ValidatePipelineDefinitionResponse * const q);

    void parseValidatePipelineDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ValidatePipelineDefinitionResponse)
    Q_DISABLE_COPY(ValidatePipelineDefinitionResponsePrivate)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
