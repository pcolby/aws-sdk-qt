// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHPLACEINDEXFORPOSITIONRESPONSE_P_H
#define QTAWS_SEARCHPLACEINDEXFORPOSITIONRESPONSE_P_H

#include "locationresponse_p.h"

namespace QtAws {
namespace Location {

class SearchPlaceIndexForPositionResponse;

class SearchPlaceIndexForPositionResponsePrivate : public LocationResponsePrivate {

public:

    explicit SearchPlaceIndexForPositionResponsePrivate(SearchPlaceIndexForPositionResponse * const q);

    void parseSearchPlaceIndexForPositionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SearchPlaceIndexForPositionResponse)
    Q_DISABLE_COPY(SearchPlaceIndexForPositionResponsePrivate)

};

} // namespace Location
} // namespace QtAws

#endif
