// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHPLACEINDEXFORSUGGESTIONSRESPONSE_P_H
#define QTAWS_SEARCHPLACEINDEXFORSUGGESTIONSRESPONSE_P_H

#include "locationresponse_p.h"

namespace QtAws {
namespace Location {

class SearchPlaceIndexForSuggestionsResponse;

class SearchPlaceIndexForSuggestionsResponsePrivate : public LocationResponsePrivate {

public:

    explicit SearchPlaceIndexForSuggestionsResponsePrivate(SearchPlaceIndexForSuggestionsResponse * const q);

    void parseSearchPlaceIndexForSuggestionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SearchPlaceIndexForSuggestionsResponse)
    Q_DISABLE_COPY(SearchPlaceIndexForSuggestionsResponsePrivate)

};

} // namespace Location
} // namespace QtAws

#endif
