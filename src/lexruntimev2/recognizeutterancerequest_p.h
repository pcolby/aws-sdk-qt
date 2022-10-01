// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RECOGNIZEUTTERANCEREQUEST_P_H
#define QTAWS_RECOGNIZEUTTERANCEREQUEST_P_H

#include "lexruntimev2request_p.h"
#include "recognizeutterancerequest.h"

namespace QtAws {
namespace LexRuntimeV2 {

class RecognizeUtteranceRequest;

class RecognizeUtteranceRequestPrivate : public LexRuntimeV2RequestPrivate {

public:
    RecognizeUtteranceRequestPrivate(const LexRuntimeV2Request::Action action,
                                   RecognizeUtteranceRequest * const q);
    RecognizeUtteranceRequestPrivate(const RecognizeUtteranceRequestPrivate &other,
                                   RecognizeUtteranceRequest * const q);

private:
    Q_DECLARE_PUBLIC(RecognizeUtteranceRequest)

};

} // namespace LexRuntimeV2
} // namespace QtAws

#endif
