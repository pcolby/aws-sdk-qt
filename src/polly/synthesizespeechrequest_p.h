// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SYNTHESIZESPEECHREQUEST_P_H
#define QTAWS_SYNTHESIZESPEECHREQUEST_P_H

#include "pollyrequest_p.h"
#include "synthesizespeechrequest.h"

namespace QtAws {
namespace Polly {

class SynthesizeSpeechRequest;

class SynthesizeSpeechRequestPrivate : public PollyRequestPrivate {

public:
    SynthesizeSpeechRequestPrivate(const PollyRequest::Action action,
                                   SynthesizeSpeechRequest * const q);
    SynthesizeSpeechRequestPrivate(const SynthesizeSpeechRequestPrivate &other,
                                   SynthesizeSpeechRequest * const q);

private:
    Q_DECLARE_PUBLIC(SynthesizeSpeechRequest)

};

} // namespace Polly
} // namespace QtAws

#endif
