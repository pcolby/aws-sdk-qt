// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EVALUATESESSIONREQUEST_P_H
#define QTAWS_EVALUATESESSIONREQUEST_P_H

#include "voiceidrequest_p.h"
#include "evaluatesessionrequest.h"

namespace QtAws {
namespace VoiceId {

class EvaluateSessionRequest;

class EvaluateSessionRequestPrivate : public VoiceIdRequestPrivate {

public:
    EvaluateSessionRequestPrivate(const VoiceIdRequest::Action action,
                                   EvaluateSessionRequest * const q);
    EvaluateSessionRequestPrivate(const EvaluateSessionRequestPrivate &other,
                                   EvaluateSessionRequest * const q);

private:
    Q_DECLARE_PUBLIC(EvaluateSessionRequest)

};

} // namespace VoiceId
} // namespace QtAws

#endif
