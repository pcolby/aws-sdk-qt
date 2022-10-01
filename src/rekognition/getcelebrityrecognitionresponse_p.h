// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCELEBRITYRECOGNITIONRESPONSE_P_H
#define QTAWS_GETCELEBRITYRECOGNITIONRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class GetCelebrityRecognitionResponse;

class GetCelebrityRecognitionResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit GetCelebrityRecognitionResponsePrivate(GetCelebrityRecognitionResponse * const q);

    void parseGetCelebrityRecognitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCelebrityRecognitionResponse)
    Q_DISABLE_COPY(GetCelebrityRecognitionResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif
