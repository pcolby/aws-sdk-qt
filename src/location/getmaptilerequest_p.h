// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMAPTILEREQUEST_P_H
#define QTAWS_GETMAPTILEREQUEST_P_H

#include "locationrequest_p.h"
#include "getmaptilerequest.h"

namespace QtAws {
namespace Location {

class GetMapTileRequest;

class GetMapTileRequestPrivate : public LocationRequestPrivate {

public:
    GetMapTileRequestPrivate(const LocationRequest::Action action,
                                   GetMapTileRequest * const q);
    GetMapTileRequestPrivate(const GetMapTileRequestPrivate &other,
                                   GetMapTileRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMapTileRequest)

};

} // namespace Location
} // namespace QtAws

#endif
