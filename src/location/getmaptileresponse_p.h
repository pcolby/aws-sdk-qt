// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMAPTILERESPONSE_P_H
#define QTAWS_GETMAPTILERESPONSE_P_H

#include "locationresponse_p.h"

namespace QtAws {
namespace Location {

class GetMapTileResponse;

class GetMapTileResponsePrivate : public LocationResponsePrivate {

public:

    explicit GetMapTileResponsePrivate(GetMapTileResponse * const q);

    void parseGetMapTileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMapTileResponse)
    Q_DISABLE_COPY(GetMapTileResponsePrivate)

};

} // namespace Location
} // namespace QtAws

#endif
