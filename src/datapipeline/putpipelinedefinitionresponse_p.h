// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPIPELINEDEFINITIONRESPONSE_P_H
#define QTAWS_PUTPIPELINEDEFINITIONRESPONSE_P_H

#include "datapipelineresponse_p.h"

namespace QtAws {
namespace DataPipeline {

class PutPipelineDefinitionResponse;

class PutPipelineDefinitionResponsePrivate : public DataPipelineResponsePrivate {

public:

    explicit PutPipelineDefinitionResponsePrivate(PutPipelineDefinitionResponse * const q);

    void parsePutPipelineDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutPipelineDefinitionResponse)
    Q_DISABLE_COPY(PutPipelineDefinitionResponsePrivate)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
