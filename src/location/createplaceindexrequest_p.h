// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPLACEINDEXREQUEST_P_H
#define QTAWS_CREATEPLACEINDEXREQUEST_P_H

#include "locationrequest_p.h"
#include "createplaceindexrequest.h"

namespace QtAws {
namespace Location {

class CreatePlaceIndexRequest;

class CreatePlaceIndexRequestPrivate : public LocationRequestPrivate {

public:
    CreatePlaceIndexRequestPrivate(const LocationRequest::Action action,
                                   CreatePlaceIndexRequest * const q);
    CreatePlaceIndexRequestPrivate(const CreatePlaceIndexRequestPrivate &other,
                                   CreatePlaceIndexRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePlaceIndexRequest)

};

} // namespace Location
} // namespace QtAws

#endif
