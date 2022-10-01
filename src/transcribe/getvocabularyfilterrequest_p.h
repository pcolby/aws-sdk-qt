// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVOCABULARYFILTERREQUEST_P_H
#define QTAWS_GETVOCABULARYFILTERREQUEST_P_H

#include "transcriberequest_p.h"
#include "getvocabularyfilterrequest.h"

namespace QtAws {
namespace Transcribe {

class GetVocabularyFilterRequest;

class GetVocabularyFilterRequestPrivate : public TranscribeRequestPrivate {

public:
    GetVocabularyFilterRequestPrivate(const TranscribeRequest::Action action,
                                   GetVocabularyFilterRequest * const q);
    GetVocabularyFilterRequestPrivate(const GetVocabularyFilterRequestPrivate &other,
                                   GetVocabularyFilterRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetVocabularyFilterRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
