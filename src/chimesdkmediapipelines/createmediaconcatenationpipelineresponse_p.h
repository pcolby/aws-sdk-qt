// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMEDIACONCATENATIONPIPELINERESPONSE_P_H
#define QTAWS_CREATEMEDIACONCATENATIONPIPELINERESPONSE_P_H

#include "chimesdkmediapipelinesresponse_p.h"

namespace QtAws {
namespace ChimeSdkMediaPipelines {

class CreateMediaConcatenationPipelineResponse;

class CreateMediaConcatenationPipelineResponsePrivate : public ChimeSdkMediaPipelinesResponsePrivate {

public:

    explicit CreateMediaConcatenationPipelineResponsePrivate(CreateMediaConcatenationPipelineResponse * const q);

    void parseCreateMediaConcatenationPipelineResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateMediaConcatenationPipelineResponse)
    Q_DISABLE_COPY(CreateMediaConcatenationPipelineResponsePrivate)

};

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws

#endif
