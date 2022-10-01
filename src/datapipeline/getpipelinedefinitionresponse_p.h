// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPIPELINEDEFINITIONRESPONSE_P_H
#define QTAWS_GETPIPELINEDEFINITIONRESPONSE_P_H

#include "datapipelineresponse_p.h"

namespace QtAws {
namespace DataPipeline {

class GetPipelineDefinitionResponse;

class GetPipelineDefinitionResponsePrivate : public DataPipelineResponsePrivate {

public:

    explicit GetPipelineDefinitionResponsePrivate(GetPipelineDefinitionResponse * const q);

    void parseGetPipelineDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPipelineDefinitionResponse)
    Q_DISABLE_COPY(GetPipelineDefinitionResponsePrivate)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
