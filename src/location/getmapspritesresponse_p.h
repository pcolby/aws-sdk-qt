// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMAPSPRITESRESPONSE_P_H
#define QTAWS_GETMAPSPRITESRESPONSE_P_H

#include "locationresponse_p.h"

namespace QtAws {
namespace Location {

class GetMapSpritesResponse;

class GetMapSpritesResponsePrivate : public LocationResponsePrivate {

public:

    explicit GetMapSpritesResponsePrivate(GetMapSpritesResponse * const q);

    void parseGetMapSpritesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMapSpritesResponse)
    Q_DISABLE_COPY(GetMapSpritesResponsePrivate)

};

} // namespace Location
} // namespace QtAws

#endif
