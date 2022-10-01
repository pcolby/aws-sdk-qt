// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSPEECHSYNTHESISTASKREQUEST_P_H
#define QTAWS_STARTSPEECHSYNTHESISTASKREQUEST_P_H

#include "pollyrequest_p.h"
#include "startspeechsynthesistaskrequest.h"

namespace QtAws {
namespace Polly {

class StartSpeechSynthesisTaskRequest;

class StartSpeechSynthesisTaskRequestPrivate : public PollyRequestPrivate {

public:
    StartSpeechSynthesisTaskRequestPrivate(const PollyRequest::Action action,
                                   StartSpeechSynthesisTaskRequest * const q);
    StartSpeechSynthesisTaskRequestPrivate(const StartSpeechSynthesisTaskRequestPrivate &other,
                                   StartSpeechSynthesisTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartSpeechSynthesisTaskRequest)

};

} // namespace Polly
} // namespace QtAws

#endif
