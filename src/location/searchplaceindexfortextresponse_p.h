// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHPLACEINDEXFORTEXTRESPONSE_P_H
#define QTAWS_SEARCHPLACEINDEXFORTEXTRESPONSE_P_H

#include "locationresponse_p.h"

namespace QtAws {
namespace Location {

class SearchPlaceIndexForTextResponse;

class SearchPlaceIndexForTextResponsePrivate : public LocationResponsePrivate {

public:

    explicit SearchPlaceIndexForTextResponsePrivate(SearchPlaceIndexForTextResponse * const q);

    void parseSearchPlaceIndexForTextResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SearchPlaceIndexForTextResponse)
    Q_DISABLE_COPY(SearchPlaceIndexForTextResponsePrivate)

};

} // namespace Location
} // namespace QtAws

#endif
