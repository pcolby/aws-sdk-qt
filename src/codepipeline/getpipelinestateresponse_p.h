// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPIPELINESTATERESPONSE_P_H
#define QTAWS_GETPIPELINESTATERESPONSE_P_H

#include "codepipelineresponse_p.h"

namespace QtAws {
namespace CodePipeline {

class GetPipelineStateResponse;

class GetPipelineStateResponsePrivate : public CodePipelineResponsePrivate {

public:

    explicit GetPipelineStateResponsePrivate(GetPipelineStateResponse * const q);

    void parseGetPipelineStateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPipelineStateResponse)
    Q_DISABLE_COPY(GetPipelineStateResponsePrivate)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
