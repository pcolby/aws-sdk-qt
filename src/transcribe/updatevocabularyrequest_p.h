// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVOCABULARYREQUEST_P_H
#define QTAWS_UPDATEVOCABULARYREQUEST_P_H

#include "transcriberequest_p.h"
#include "updatevocabularyrequest.h"

namespace QtAws {
namespace Transcribe {

class UpdateVocabularyRequest;

class UpdateVocabularyRequestPrivate : public TranscribeRequestPrivate {

public:
    UpdateVocabularyRequestPrivate(const TranscribeRequest::Action action,
                                   UpdateVocabularyRequest * const q);
    UpdateVocabularyRequestPrivate(const UpdateVocabularyRequestPrivate &other,
                                   UpdateVocabularyRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateVocabularyRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
