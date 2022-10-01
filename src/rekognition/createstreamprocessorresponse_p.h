// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTREAMPROCESSORRESPONSE_P_H
#define QTAWS_CREATESTREAMPROCESSORRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class CreateStreamProcessorResponse;

class CreateStreamProcessorResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit CreateStreamProcessorResponsePrivate(CreateStreamProcessorResponse * const q);

    void parseCreateStreamProcessorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateStreamProcessorResponse)
    Q_DISABLE_COPY(CreateStreamProcessorResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif
