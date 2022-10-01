// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTREAMPROCESSORRESPONSE_P_H
#define QTAWS_UPDATESTREAMPROCESSORRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class UpdateStreamProcessorResponse;

class UpdateStreamProcessorResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit UpdateStreamProcessorResponsePrivate(UpdateStreamProcessorResponse * const q);

    void parseUpdateStreamProcessorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateStreamProcessorResponse)
    Q_DISABLE_COPY(UpdateStreamProcessorResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif
