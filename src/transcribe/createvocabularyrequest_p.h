// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVOCABULARYREQUEST_P_H
#define QTAWS_CREATEVOCABULARYREQUEST_P_H

#include "transcriberequest_p.h"
#include "createvocabularyrequest.h"

namespace QtAws {
namespace Transcribe {

class CreateVocabularyRequest;

class CreateVocabularyRequestPrivate : public TranscribeRequestPrivate {

public:
    CreateVocabularyRequestPrivate(const TranscribeRequest::Action action,
                                   CreateVocabularyRequest * const q);
    CreateVocabularyRequestPrivate(const CreateVocabularyRequestPrivate &other,
                                   CreateVocabularyRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateVocabularyRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
