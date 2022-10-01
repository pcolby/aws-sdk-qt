// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RECOGNIZETEXTREQUEST_P_H
#define QTAWS_RECOGNIZETEXTREQUEST_P_H

#include "lexruntimev2request_p.h"
#include "recognizetextrequest.h"

namespace QtAws {
namespace LexRuntimeV2 {

class RecognizeTextRequest;

class RecognizeTextRequestPrivate : public LexRuntimeV2RequestPrivate {

public:
    RecognizeTextRequestPrivate(const LexRuntimeV2Request::Action action,
                                   RecognizeTextRequest * const q);
    RecognizeTextRequestPrivate(const RecognizeTextRequestPrivate &other,
                                   RecognizeTextRequest * const q);

private:
    Q_DECLARE_PUBLIC(RecognizeTextRequest)

};

} // namespace LexRuntimeV2
} // namespace QtAws

#endif
