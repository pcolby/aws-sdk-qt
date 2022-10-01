// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHPLACEINDEXFORPOSITIONREQUEST_P_H
#define QTAWS_SEARCHPLACEINDEXFORPOSITIONREQUEST_P_H

#include "locationrequest_p.h"
#include "searchplaceindexforpositionrequest.h"

namespace QtAws {
namespace Location {

class SearchPlaceIndexForPositionRequest;

class SearchPlaceIndexForPositionRequestPrivate : public LocationRequestPrivate {

public:
    SearchPlaceIndexForPositionRequestPrivate(const LocationRequest::Action action,
                                   SearchPlaceIndexForPositionRequest * const q);
    SearchPlaceIndexForPositionRequestPrivate(const SearchPlaceIndexForPositionRequestPrivate &other,
                                   SearchPlaceIndexForPositionRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchPlaceIndexForPositionRequest)

};

} // namespace Location
} // namespace QtAws

#endif
