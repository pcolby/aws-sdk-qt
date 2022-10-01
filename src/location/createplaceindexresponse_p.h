// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPLACEINDEXRESPONSE_P_H
#define QTAWS_CREATEPLACEINDEXRESPONSE_P_H

#include "locationresponse_p.h"

namespace QtAws {
namespace Location {

class CreatePlaceIndexResponse;

class CreatePlaceIndexResponsePrivate : public LocationResponsePrivate {

public:

    explicit CreatePlaceIndexResponsePrivate(CreatePlaceIndexResponse * const q);

    void parseCreatePlaceIndexResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePlaceIndexResponse)
    Q_DISABLE_COPY(CreatePlaceIndexResponsePrivate)

};

} // namespace Location
} // namespace QtAws

#endif
