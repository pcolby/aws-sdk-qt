// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMEDICALVOCABULARYREQUEST_P_H
#define QTAWS_UPDATEMEDICALVOCABULARYREQUEST_P_H

#include "transcriberequest_p.h"
#include "updatemedicalvocabularyrequest.h"

namespace QtAws {
namespace Transcribe {

class UpdateMedicalVocabularyRequest;

class UpdateMedicalVocabularyRequestPrivate : public TranscribeRequestPrivate {

public:
    UpdateMedicalVocabularyRequestPrivate(const TranscribeRequest::Action action,
                                   UpdateMedicalVocabularyRequest * const q);
    UpdateMedicalVocabularyRequestPrivate(const UpdateMedicalVocabularyRequestPrivate &other,
                                   UpdateMedicalVocabularyRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateMedicalVocabularyRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
