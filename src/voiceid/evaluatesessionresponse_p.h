// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EVALUATESESSIONRESPONSE_P_H
#define QTAWS_EVALUATESESSIONRESPONSE_P_H

#include "voiceidresponse_p.h"

namespace QtAws {
namespace VoiceId {

class EvaluateSessionResponse;

class EvaluateSessionResponsePrivate : public VoiceIdResponsePrivate {

public:

    explicit EvaluateSessionResponsePrivate(EvaluateSessionResponse * const q);

    void parseEvaluateSessionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EvaluateSessionResponse)
    Q_DISABLE_COPY(EvaluateSessionResponsePrivate)

};

} // namespace VoiceId
} // namespace QtAws

#endif
