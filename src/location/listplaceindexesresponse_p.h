// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPLACEINDEXESRESPONSE_P_H
#define QTAWS_LISTPLACEINDEXESRESPONSE_P_H

#include "locationresponse_p.h"

namespace QtAws {
namespace Location {

class ListPlaceIndexesResponse;

class ListPlaceIndexesResponsePrivate : public LocationResponsePrivate {

public:

    explicit ListPlaceIndexesResponsePrivate(ListPlaceIndexesResponse * const q);

    void parseListPlaceIndexesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPlaceIndexesResponse)
    Q_DISABLE_COPY(ListPlaceIndexesResponsePrivate)

};

} // namespace Location
} // namespace QtAws

#endif
