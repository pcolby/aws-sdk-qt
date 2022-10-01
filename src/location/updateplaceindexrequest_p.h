// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPLACEINDEXREQUEST_P_H
#define QTAWS_UPDATEPLACEINDEXREQUEST_P_H

#include "locationrequest_p.h"
#include "updateplaceindexrequest.h"

namespace QtAws {
namespace Location {

class UpdatePlaceIndexRequest;

class UpdatePlaceIndexRequestPrivate : public LocationRequestPrivate {

public:
    UpdatePlaceIndexRequestPrivate(const LocationRequest::Action action,
                                   UpdatePlaceIndexRequest * const q);
    UpdatePlaceIndexRequestPrivate(const UpdatePlaceIndexRequestPrivate &other,
                                   UpdatePlaceIndexRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdatePlaceIndexRequest)

};

} // namespace Location
} // namespace QtAws

#endif
