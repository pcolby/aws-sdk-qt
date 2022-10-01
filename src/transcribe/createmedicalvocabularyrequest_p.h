// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMEDICALVOCABULARYREQUEST_P_H
#define QTAWS_CREATEMEDICALVOCABULARYREQUEST_P_H

#include "transcriberequest_p.h"
#include "createmedicalvocabularyrequest.h"

namespace QtAws {
namespace Transcribe {

class CreateMedicalVocabularyRequest;

class CreateMedicalVocabularyRequestPrivate : public TranscribeRequestPrivate {

public:
    CreateMedicalVocabularyRequestPrivate(const TranscribeRequest::Action action,
                                   CreateMedicalVocabularyRequest * const q);
    CreateMedicalVocabularyRequestPrivate(const CreateMedicalVocabularyRequestPrivate &other,
                                   CreateMedicalVocabularyRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateMedicalVocabularyRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
