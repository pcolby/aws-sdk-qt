// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMEDICALVOCABULARYREQUEST_P_H
#define QTAWS_DELETEMEDICALVOCABULARYREQUEST_P_H

#include "transcriberequest_p.h"
#include "deletemedicalvocabularyrequest.h"

namespace QtAws {
namespace Transcribe {

class DeleteMedicalVocabularyRequest;

class DeleteMedicalVocabularyRequestPrivate : public TranscribeRequestPrivate {

public:
    DeleteMedicalVocabularyRequestPrivate(const TranscribeRequest::Action action,
                                   DeleteMedicalVocabularyRequest * const q);
    DeleteMedicalVocabularyRequestPrivate(const DeleteMedicalVocabularyRequestPrivate &other,
                                   DeleteMedicalVocabularyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteMedicalVocabularyRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
