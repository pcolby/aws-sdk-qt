// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPIPELINESTATUSRESPONSE_P_H
#define QTAWS_UPDATEPIPELINESTATUSRESPONSE_P_H

#include "elastictranscoderresponse_p.h"

namespace QtAws {
namespace ElasticTranscoder {

class UpdatePipelineStatusResponse;

class UpdatePipelineStatusResponsePrivate : public ElasticTranscoderResponsePrivate {

public:

    explicit UpdatePipelineStatusResponsePrivate(UpdatePipelineStatusResponse * const q);

    void parseUpdatePipelineStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdatePipelineStatusResponse)
    Q_DISABLE_COPY(UpdatePipelineStatusResponsePrivate)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif
