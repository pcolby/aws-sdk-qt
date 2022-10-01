// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPSTREAMPROCESSORRESPONSE_P_H
#define QTAWS_STOPSTREAMPROCESSORRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class StopStreamProcessorResponse;

class StopStreamProcessorResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit StopStreamProcessorResponsePrivate(StopStreamProcessorResponse * const q);

    void parseStopStreamProcessorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopStreamProcessorResponse)
    Q_DISABLE_COPY(StopStreamProcessorResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif
