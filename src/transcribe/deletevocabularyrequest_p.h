// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOCABULARYREQUEST_P_H
#define QTAWS_DELETEVOCABULARYREQUEST_P_H

#include "transcriberequest_p.h"
#include "deletevocabularyrequest.h"

namespace QtAws {
namespace Transcribe {

class DeleteVocabularyRequest;

class DeleteVocabularyRequestPrivate : public TranscribeRequestPrivate {

public:
    DeleteVocabularyRequestPrivate(const TranscribeRequest::Action action,
                                   DeleteVocabularyRequest * const q);
    DeleteVocabularyRequestPrivate(const DeleteVocabularyRequestPrivate &other,
                                   DeleteVocabularyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteVocabularyRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
