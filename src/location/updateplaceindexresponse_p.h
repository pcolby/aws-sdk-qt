// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPLACEINDEXRESPONSE_P_H
#define QTAWS_UPDATEPLACEINDEXRESPONSE_P_H

#include "locationresponse_p.h"

namespace QtAws {
namespace Location {

class UpdatePlaceIndexResponse;

class UpdatePlaceIndexResponsePrivate : public LocationResponsePrivate {

public:

    explicit UpdatePlaceIndexResponsePrivate(UpdatePlaceIndexResponse * const q);

    void parseUpdatePlaceIndexResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdatePlaceIndexResponse)
    Q_DISABLE_COPY(UpdatePlaceIndexResponsePrivate)

};

} // namespace Location
} // namespace QtAws

#endif
