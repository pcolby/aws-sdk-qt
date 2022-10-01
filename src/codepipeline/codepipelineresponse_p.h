// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODEPIPELINERESPONSE_P_H
#define QTAWS_CODEPIPELINERESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace CodePipeline {

class CodePipelineResponse;

class CodePipelineResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit CodePipelineResponsePrivate(CodePipelineResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CodePipelineResponse)
    Q_DISABLE_COPY(CodePipelineResponsePrivate)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
