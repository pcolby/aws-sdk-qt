// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTJOBSBYPIPELINERESPONSE_P_H
#define QTAWS_LISTJOBSBYPIPELINERESPONSE_P_H

#include "elastictranscoderresponse_p.h"

namespace QtAws {
namespace ElasticTranscoder {

class ListJobsByPipelineResponse;

class ListJobsByPipelineResponsePrivate : public ElasticTranscoderResponsePrivate {

public:

    explicit ListJobsByPipelineResponsePrivate(ListJobsByPipelineResponse * const q);

    void parseListJobsByPipelineResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListJobsByPipelineResponse)
    Q_DISABLE_COPY(ListJobsByPipelineResponsePrivate)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif
