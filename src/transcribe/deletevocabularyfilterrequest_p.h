// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOCABULARYFILTERREQUEST_P_H
#define QTAWS_DELETEVOCABULARYFILTERREQUEST_P_H

#include "transcriberequest_p.h"
#include "deletevocabularyfilterrequest.h"

namespace QtAws {
namespace Transcribe {

class DeleteVocabularyFilterRequest;

class DeleteVocabularyFilterRequestPrivate : public TranscribeRequestPrivate {

public:
    DeleteVocabularyFilterRequestPrivate(const TranscribeRequest::Action action,
                                   DeleteVocabularyFilterRequest * const q);
    DeleteVocabularyFilterRequestPrivate(const DeleteVocabularyFilterRequestPrivate &other,
                                   DeleteVocabularyFilterRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteVocabularyFilterRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
