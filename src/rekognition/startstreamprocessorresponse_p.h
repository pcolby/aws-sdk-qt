// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSTREAMPROCESSORRESPONSE_P_H
#define QTAWS_STARTSTREAMPROCESSORRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class StartStreamProcessorResponse;

class StartStreamProcessorResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit StartStreamProcessorResponsePrivate(StartStreamProcessorResponse * const q);

    void parseStartStreamProcessorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartStreamProcessorResponse)
    Q_DISABLE_COPY(StartStreamProcessorResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif
