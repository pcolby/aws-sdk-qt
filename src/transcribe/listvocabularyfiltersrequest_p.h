// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVOCABULARYFILTERSREQUEST_P_H
#define QTAWS_LISTVOCABULARYFILTERSREQUEST_P_H

#include "transcriberequest_p.h"
#include "listvocabularyfiltersrequest.h"

namespace QtAws {
namespace Transcribe {

class ListVocabularyFiltersRequest;

class ListVocabularyFiltersRequestPrivate : public TranscribeRequestPrivate {

public:
    ListVocabularyFiltersRequestPrivate(const TranscribeRequest::Action action,
                                   ListVocabularyFiltersRequest * const q);
    ListVocabularyFiltersRequestPrivate(const ListVocabularyFiltersRequestPrivate &other,
                                   ListVocabularyFiltersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListVocabularyFiltersRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
