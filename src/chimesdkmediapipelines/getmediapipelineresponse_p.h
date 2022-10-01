// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMEDIAPIPELINERESPONSE_P_H
#define QTAWS_GETMEDIAPIPELINERESPONSE_P_H

#include "chimesdkmediapipelinesresponse_p.h"

namespace QtAws {
namespace ChimeSdkMediaPipelines {

class GetMediaPipelineResponse;

class GetMediaPipelineResponsePrivate : public ChimeSdkMediaPipelinesResponsePrivate {

public:

    explicit GetMediaPipelineResponsePrivate(GetMediaPipelineResponse * const q);

    void parseGetMediaPipelineResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMediaPipelineResponse)
    Q_DISABLE_COPY(GetMediaPipelineResponsePrivate)

};

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws

#endif
