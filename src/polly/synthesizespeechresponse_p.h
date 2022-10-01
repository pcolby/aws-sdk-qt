// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SYNTHESIZESPEECHRESPONSE_P_H
#define QTAWS_SYNTHESIZESPEECHRESPONSE_P_H

#include "pollyresponse_p.h"

namespace QtAws {
namespace Polly {

class SynthesizeSpeechResponse;

class SynthesizeSpeechResponsePrivate : public PollyResponsePrivate {

public:

    explicit SynthesizeSpeechResponsePrivate(SynthesizeSpeechResponse * const q);

    void parseSynthesizeSpeechResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SynthesizeSpeechResponse)
    Q_DISABLE_COPY(SynthesizeSpeechResponsePrivate)

};

} // namespace Polly
} // namespace QtAws

#endif
