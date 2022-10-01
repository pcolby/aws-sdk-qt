// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHPLACEINDEXFORTEXTREQUEST_P_H
#define QTAWS_SEARCHPLACEINDEXFORTEXTREQUEST_P_H

#include "locationrequest_p.h"
#include "searchplaceindexfortextrequest.h"

namespace QtAws {
namespace Location {

class SearchPlaceIndexForTextRequest;

class SearchPlaceIndexForTextRequestPrivate : public LocationRequestPrivate {

public:
    SearchPlaceIndexForTextRequestPrivate(const LocationRequest::Action action,
                                   SearchPlaceIndexForTextRequest * const q);
    SearchPlaceIndexForTextRequestPrivate(const SearchPlaceIndexForTextRequestPrivate &other,
                                   SearchPlaceIndexForTextRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchPlaceIndexForTextRequest)

};

} // namespace Location
} // namespace QtAws

#endif
