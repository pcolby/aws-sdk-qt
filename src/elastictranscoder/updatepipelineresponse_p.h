// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPIPELINERESPONSE_P_H
#define QTAWS_UPDATEPIPELINERESPONSE_P_H

#include "elastictranscoderresponse_p.h"

namespace QtAws {
namespace ElasticTranscoder {

class UpdatePipelineResponse;

class UpdatePipelineResponsePrivate : public ElasticTranscoderResponsePrivate {

public:

    explicit UpdatePipelineResponsePrivate(UpdatePipelineResponse * const q);

    void parseUpdatePipelineResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdatePipelineResponse)
    Q_DISABLE_COPY(UpdatePipelineResponsePrivate)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif
