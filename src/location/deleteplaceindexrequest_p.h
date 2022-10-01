// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPLACEINDEXREQUEST_P_H
#define QTAWS_DELETEPLACEINDEXREQUEST_P_H

#include "locationrequest_p.h"
#include "deleteplaceindexrequest.h"

namespace QtAws {
namespace Location {

class DeletePlaceIndexRequest;

class DeletePlaceIndexRequestPrivate : public LocationRequestPrivate {

public:
    DeletePlaceIndexRequestPrivate(const LocationRequest::Action action,
                                   DeletePlaceIndexRequest * const q);
    DeletePlaceIndexRequestPrivate(const DeletePlaceIndexRequestPrivate &other,
                                   DeletePlaceIndexRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePlaceIndexRequest)

};

} // namespace Location
} // namespace QtAws

#endif
