// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVOCABULARIESREQUEST_P_H
#define QTAWS_LISTVOCABULARIESREQUEST_P_H

#include "transcriberequest_p.h"
#include "listvocabulariesrequest.h"

namespace QtAws {
namespace Transcribe {

class ListVocabulariesRequest;

class ListVocabulariesRequestPrivate : public TranscribeRequestPrivate {

public:
    ListVocabulariesRequestPrivate(const TranscribeRequest::Action action,
                                   ListVocabulariesRequest * const q);
    ListVocabulariesRequestPrivate(const ListVocabulariesRequestPrivate &other,
                                   ListVocabulariesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListVocabulariesRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
