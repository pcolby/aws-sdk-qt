// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMEDIACAPTUREPIPELINERESPONSE_P_H
#define QTAWS_DELETEMEDIACAPTUREPIPELINERESPONSE_P_H

#include "chimesdkmediapipelinesresponse_p.h"

namespace QtAws {
namespace ChimeSdkMediaPipelines {

class DeleteMediaCapturePipelineResponse;

class DeleteMediaCapturePipelineResponsePrivate : public ChimeSdkMediaPipelinesResponsePrivate {

public:

    explicit DeleteMediaCapturePipelineResponsePrivate(DeleteMediaCapturePipelineResponse * const q);

    void parseDeleteMediaCapturePipelineResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteMediaCapturePipelineResponse)
    Q_DISABLE_COPY(DeleteMediaCapturePipelineResponsePrivate)

};

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws

#endif
