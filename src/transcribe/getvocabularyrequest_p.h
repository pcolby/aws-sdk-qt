// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVOCABULARYREQUEST_P_H
#define QTAWS_GETVOCABULARYREQUEST_P_H

#include "transcriberequest_p.h"
#include "getvocabularyrequest.h"

namespace QtAws {
namespace Transcribe {

class GetVocabularyRequest;

class GetVocabularyRequestPrivate : public TranscribeRequestPrivate {

public:
    GetVocabularyRequestPrivate(const TranscribeRequest::Action action,
                                   GetVocabularyRequest * const q);
    GetVocabularyRequestPrivate(const GetVocabularyRequestPrivate &other,
                                   GetVocabularyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetVocabularyRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
