// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMAPSREQUEST_P_H
#define QTAWS_LISTMAPSREQUEST_P_H

#include "locationrequest_p.h"
#include "listmapsrequest.h"

namespace QtAws {
namespace Location {

class ListMapsRequest;

class ListMapsRequestPrivate : public LocationRequestPrivate {

public:
    ListMapsRequestPrivate(const LocationRequest::Action action,
                                   ListMapsRequest * const q);
    ListMapsRequestPrivate(const ListMapsRequestPrivate &other,
                                   ListMapsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListMapsRequest)

};

} // namespace Location
} // namespace QtAws

#endif
