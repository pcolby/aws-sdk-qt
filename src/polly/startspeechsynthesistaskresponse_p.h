// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSPEECHSYNTHESISTASKRESPONSE_P_H
#define QTAWS_STARTSPEECHSYNTHESISTASKRESPONSE_P_H

#include "pollyresponse_p.h"

namespace QtAws {
namespace Polly {

class StartSpeechSynthesisTaskResponse;

class StartSpeechSynthesisTaskResponsePrivate : public PollyResponsePrivate {

public:

    explicit StartSpeechSynthesisTaskResponsePrivate(StartSpeechSynthesisTaskResponse * const q);

    void parseStartSpeechSynthesisTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartSpeechSynthesisTaskResponse)
    Q_DISABLE_COPY(StartSpeechSynthesisTaskResponsePrivate)

};

} // namespace Polly
} // namespace QtAws

#endif
