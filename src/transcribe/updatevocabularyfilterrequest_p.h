// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVOCABULARYFILTERREQUEST_P_H
#define QTAWS_UPDATEVOCABULARYFILTERREQUEST_P_H

#include "transcriberequest_p.h"
#include "updatevocabularyfilterrequest.h"

namespace QtAws {
namespace Transcribe {

class UpdateVocabularyFilterRequest;

class UpdateVocabularyFilterRequestPrivate : public TranscribeRequestPrivate {

public:
    UpdateVocabularyFilterRequestPrivate(const TranscribeRequest::Action action,
                                   UpdateVocabularyFilterRequest * const q);
    UpdateVocabularyFilterRequestPrivate(const UpdateVocabularyFilterRequestPrivate &other,
                                   UpdateVocabularyFilterRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateVocabularyFilterRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
