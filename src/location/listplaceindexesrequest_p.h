// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPLACEINDEXESREQUEST_P_H
#define QTAWS_LISTPLACEINDEXESREQUEST_P_H

#include "locationrequest_p.h"
#include "listplaceindexesrequest.h"

namespace QtAws {
namespace Location {

class ListPlaceIndexesRequest;

class ListPlaceIndexesRequestPrivate : public LocationRequestPrivate {

public:
    ListPlaceIndexesRequestPrivate(const LocationRequest::Action action,
                                   ListPlaceIndexesRequest * const q);
    ListPlaceIndexesRequestPrivate(const ListPlaceIndexesRequestPrivate &other,
                                   ListPlaceIndexesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPlaceIndexesRequest)

};

} // namespace Location
} // namespace QtAws

#endif
