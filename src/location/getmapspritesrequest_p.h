// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMAPSPRITESREQUEST_P_H
#define QTAWS_GETMAPSPRITESREQUEST_P_H

#include "locationrequest_p.h"
#include "getmapspritesrequest.h"

namespace QtAws {
namespace Location {

class GetMapSpritesRequest;

class GetMapSpritesRequestPrivate : public LocationRequestPrivate {

public:
    GetMapSpritesRequestPrivate(const LocationRequest::Action action,
                                   GetMapSpritesRequest * const q);
    GetMapSpritesRequestPrivate(const GetMapSpritesRequestPrivate &other,
                                   GetMapSpritesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMapSpritesRequest)

};

} // namespace Location
} // namespace QtAws

#endif
