// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSPEECHSYNTHESISTASKREQUEST_P_H
#define QTAWS_GETSPEECHSYNTHESISTASKREQUEST_P_H

#include "pollyrequest_p.h"
#include "getspeechsynthesistaskrequest.h"

namespace QtAws {
namespace Polly {

class GetSpeechSynthesisTaskRequest;

class GetSpeechSynthesisTaskRequestPrivate : public PollyRequestPrivate {

public:
    GetSpeechSynthesisTaskRequestPrivate(const PollyRequest::Action action,
                                   GetSpeechSynthesisTaskRequest * const q);
    GetSpeechSynthesisTaskRequestPrivate(const GetSpeechSynthesisTaskRequestPrivate &other,
                                   GetSpeechSynthesisTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSpeechSynthesisTaskRequest)

};

} // namespace Polly
} // namespace QtAws

#endif
