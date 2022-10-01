// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHASSOCIATEDTRANSCRIPTSREQUEST_P_H
#define QTAWS_SEARCHASSOCIATEDTRANSCRIPTSREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "searchassociatedtranscriptsrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class SearchAssociatedTranscriptsRequest;

class SearchAssociatedTranscriptsRequestPrivate : public LexModelsV2RequestPrivate {

public:
    SearchAssociatedTranscriptsRequestPrivate(const LexModelsV2Request::Action action,
                                   SearchAssociatedTranscriptsRequest * const q);
    SearchAssociatedTranscriptsRequestPrivate(const SearchAssociatedTranscriptsRequestPrivate &other,
                                   SearchAssociatedTranscriptsRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchAssociatedTranscriptsRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
