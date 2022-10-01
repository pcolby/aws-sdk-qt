// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVOCABULARYFILTERREQUEST_P_H
#define QTAWS_CREATEVOCABULARYFILTERREQUEST_P_H

#include "transcriberequest_p.h"
#include "createvocabularyfilterrequest.h"

namespace QtAws {
namespace Transcribe {

class CreateVocabularyFilterRequest;

class CreateVocabularyFilterRequestPrivate : public TranscribeRequestPrivate {

public:
    CreateVocabularyFilterRequestPrivate(const TranscribeRequest::Action action,
                                   CreateVocabularyFilterRequest * const q);
    CreateVocabularyFilterRequestPrivate(const CreateVocabularyFilterRequestPrivate &other,
                                   CreateVocabularyFilterRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateVocabularyFilterRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
