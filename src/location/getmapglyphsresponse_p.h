// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMAPGLYPHSRESPONSE_P_H
#define QTAWS_GETMAPGLYPHSRESPONSE_P_H

#include "locationresponse_p.h"

namespace QtAws {
namespace Location {

class GetMapGlyphsResponse;

class GetMapGlyphsResponsePrivate : public LocationResponsePrivate {

public:

    explicit GetMapGlyphsResponsePrivate(GetMapGlyphsResponse * const q);

    void parseGetMapGlyphsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMapGlyphsResponse)
    Q_DISABLE_COPY(GetMapGlyphsResponsePrivate)

};

} // namespace Location
} // namespace QtAws

#endif
