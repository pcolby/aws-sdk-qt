// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPIPELINERESPONSE_P_H
#define QTAWS_GETPIPELINERESPONSE_P_H

#include "codepipelineresponse_p.h"

namespace QtAws {
namespace CodePipeline {

class GetPipelineResponse;

class GetPipelineResponsePrivate : public CodePipelineResponsePrivate {

public:

    explicit GetPipelineResponsePrivate(GetPipelineResponse * const q);

    void parseGetPipelineResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPipelineResponse)
    Q_DISABLE_COPY(GetPipelineResponsePrivate)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
