// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CALCULATEROUTERESPONSE_P_H
#define QTAWS_CALCULATEROUTERESPONSE_P_H

#include "locationresponse_p.h"

namespace QtAws {
namespace Location {

class CalculateRouteResponse;

class CalculateRouteResponsePrivate : public LocationResponsePrivate {

public:

    explicit CalculateRouteResponsePrivate(CalculateRouteResponse * const q);

    void parseCalculateRouteResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CalculateRouteResponse)
    Q_DISABLE_COPY(CalculateRouteResponsePrivate)

};

} // namespace Location
} // namespace QtAws

#endif
