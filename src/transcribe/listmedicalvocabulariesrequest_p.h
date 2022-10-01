// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMEDICALVOCABULARIESREQUEST_P_H
#define QTAWS_LISTMEDICALVOCABULARIESREQUEST_P_H

#include "transcriberequest_p.h"
#include "listmedicalvocabulariesrequest.h"

namespace QtAws {
namespace Transcribe {

class ListMedicalVocabulariesRequest;

class ListMedicalVocabulariesRequestPrivate : public TranscribeRequestPrivate {

public:
    ListMedicalVocabulariesRequestPrivate(const TranscribeRequest::Action action,
                                   ListMedicalVocabulariesRequest * const q);
    ListMedicalVocabulariesRequestPrivate(const ListMedicalVocabulariesRequestPrivate &other,
                                   ListMedicalVocabulariesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListMedicalVocabulariesRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
