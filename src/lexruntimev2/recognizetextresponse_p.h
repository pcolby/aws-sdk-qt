// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RECOGNIZETEXTRESPONSE_P_H
#define QTAWS_RECOGNIZETEXTRESPONSE_P_H

#include "lexruntimev2response_p.h"

namespace QtAws {
namespace LexRuntimeV2 {

class RecognizeTextResponse;

class RecognizeTextResponsePrivate : public LexRuntimeV2ResponsePrivate {

public:

    explicit RecognizeTextResponsePrivate(RecognizeTextResponse * const q);

    void parseRecognizeTextResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RecognizeTextResponse)
    Q_DISABLE_COPY(RecognizeTextResponsePrivate)

};

} // namespace LexRuntimeV2
} // namespace QtAws

#endif
