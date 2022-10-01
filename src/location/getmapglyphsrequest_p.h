// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMAPGLYPHSREQUEST_P_H
#define QTAWS_GETMAPGLYPHSREQUEST_P_H

#include "locationrequest_p.h"
#include "getmapglyphsrequest.h"

namespace QtAws {
namespace Location {

class GetMapGlyphsRequest;

class GetMapGlyphsRequestPrivate : public LocationRequestPrivate {

public:
    GetMapGlyphsRequestPrivate(const LocationRequest::Action action,
                                   GetMapGlyphsRequest * const q);
    GetMapGlyphsRequestPrivate(const GetMapGlyphsRequestPrivate &other,
                                   GetMapGlyphsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMapGlyphsRequest)

};

} // namespace Location
} // namespace QtAws

#endif
