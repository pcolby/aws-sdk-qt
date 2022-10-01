// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_READPIPELINERESPONSE_P_H
#define QTAWS_READPIPELINERESPONSE_P_H

#include "elastictranscoderresponse_p.h"

namespace QtAws {
namespace ElasticTranscoder {

class ReadPipelineResponse;

class ReadPipelineResponsePrivate : public ElasticTranscoderResponsePrivate {

public:

    explicit ReadPipelineResponsePrivate(ReadPipelineResponse * const q);

    void parseReadPipelineResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ReadPipelineResponse)
    Q_DISABLE_COPY(ReadPipelineResponsePrivate)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif
