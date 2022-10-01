// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RECOGNIZEUTTERANCERESPONSE_P_H
#define QTAWS_RECOGNIZEUTTERANCERESPONSE_P_H

#include "lexruntimev2response_p.h"

namespace QtAws {
namespace LexRuntimeV2 {

class RecognizeUtteranceResponse;

class RecognizeUtteranceResponsePrivate : public LexRuntimeV2ResponsePrivate {

public:

    explicit RecognizeUtteranceResponsePrivate(RecognizeUtteranceResponse * const q);

    void parseRecognizeUtteranceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RecognizeUtteranceResponse)
    Q_DISABLE_COPY(RecognizeUtteranceResponsePrivate)

};

} // namespace LexRuntimeV2
} // namespace QtAws

#endif
