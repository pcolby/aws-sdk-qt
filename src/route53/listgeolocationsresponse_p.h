// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGEOLOCATIONSRESPONSE_P_H
#define QTAWS_LISTGEOLOCATIONSRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class ListGeoLocationsResponse;

class ListGeoLocationsResponsePrivate : public Route53ResponsePrivate {

public:

    explicit ListGeoLocationsResponsePrivate(ListGeoLocationsResponse * const q);

    void parseListGeoLocationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListGeoLocationsResponse)
    Q_DISABLE_COPY(ListGeoLocationsResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif
