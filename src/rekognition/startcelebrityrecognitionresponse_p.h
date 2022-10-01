// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCELEBRITYRECOGNITIONRESPONSE_P_H
#define QTAWS_STARTCELEBRITYRECOGNITIONRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class StartCelebrityRecognitionResponse;

class StartCelebrityRecognitionResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit StartCelebrityRecognitionResponsePrivate(StartCelebrityRecognitionResponse * const q);

    void parseStartCelebrityRecognitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartCelebrityRecognitionResponse)
    Q_DISABLE_COPY(StartCelebrityRecognitionResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif
