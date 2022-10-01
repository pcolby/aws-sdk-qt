// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSPEECHSYNTHESISTASKRESPONSE_P_H
#define QTAWS_GETSPEECHSYNTHESISTASKRESPONSE_P_H

#include "pollyresponse_p.h"

namespace QtAws {
namespace Polly {

class GetSpeechSynthesisTaskResponse;

class GetSpeechSynthesisTaskResponsePrivate : public PollyResponsePrivate {

public:

    explicit GetSpeechSynthesisTaskResponsePrivate(GetSpeechSynthesisTaskResponse * const q);

    void parseGetSpeechSynthesisTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSpeechSynthesisTaskResponse)
    Q_DISABLE_COPY(GetSpeechSynthesisTaskResponsePrivate)

};

} // namespace Polly
} // namespace QtAws

#endif
