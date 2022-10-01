// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMEDICALVOCABULARYREQUEST_P_H
#define QTAWS_GETMEDICALVOCABULARYREQUEST_P_H

#include "transcriberequest_p.h"
#include "getmedicalvocabularyrequest.h"

namespace QtAws {
namespace Transcribe {

class GetMedicalVocabularyRequest;

class GetMedicalVocabularyRequestPrivate : public TranscribeRequestPrivate {

public:
    GetMedicalVocabularyRequestPrivate(const TranscribeRequest::Action action,
                                   GetMedicalVocabularyRequest * const q);
    GetMedicalVocabularyRequestPrivate(const GetMedicalVocabularyRequestPrivate &other,
                                   GetMedicalVocabularyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMedicalVocabularyRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
