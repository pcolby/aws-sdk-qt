// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RECOGNIZECELEBRITIESRESPONSE_P_H
#define QTAWS_RECOGNIZECELEBRITIESRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class RecognizeCelebritiesResponse;

class RecognizeCelebritiesResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit RecognizeCelebritiesResponsePrivate(RecognizeCelebritiesResponse * const q);

    void parseRecognizeCelebritiesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RecognizeCelebritiesResponse)
    Q_DISABLE_COPY(RecognizeCelebritiesResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif
