// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMEDIAPIPELINERESPONSE_P_H
#define QTAWS_DELETEMEDIAPIPELINERESPONSE_P_H

#include "chimesdkmediapipelinesresponse_p.h"

namespace QtAws {
namespace ChimeSdkMediaPipelines {

class DeleteMediaPipelineResponse;

class DeleteMediaPipelineResponsePrivate : public ChimeSdkMediaPipelinesResponsePrivate {

public:

    explicit DeleteMediaPipelineResponsePrivate(DeleteMediaPipelineResponse * const q);

    void parseDeleteMediaPipelineResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteMediaPipelineResponse)
    Q_DISABLE_COPY(DeleteMediaPipelineResponsePrivate)

};

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws

#endif
