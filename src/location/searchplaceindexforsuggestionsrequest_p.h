// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHPLACEINDEXFORSUGGESTIONSREQUEST_P_H
#define QTAWS_SEARCHPLACEINDEXFORSUGGESTIONSREQUEST_P_H

#include "locationrequest_p.h"
#include "searchplaceindexforsuggestionsrequest.h"

namespace QtAws {
namespace Location {

class SearchPlaceIndexForSuggestionsRequest;

class SearchPlaceIndexForSuggestionsRequestPrivate : public LocationRequestPrivate {

public:
    SearchPlaceIndexForSuggestionsRequestPrivate(const LocationRequest::Action action,
                                   SearchPlaceIndexForSuggestionsRequest * const q);
    SearchPlaceIndexForSuggestionsRequestPrivate(const SearchPlaceIndexForSuggestionsRequestPrivate &other,
                                   SearchPlaceIndexForSuggestionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchPlaceIndexForSuggestionsRequest)

};

} // namespace Location
} // namespace QtAws

#endif
