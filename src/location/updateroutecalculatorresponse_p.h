// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROUTECALCULATORRESPONSE_P_H
#define QTAWS_UPDATEROUTECALCULATORRESPONSE_P_H

#include "locationresponse_p.h"

namespace QtAws {
namespace Location {

class UpdateRouteCalculatorResponse;

class UpdateRouteCalculatorResponsePrivate : public LocationResponsePrivate {

public:

    explicit UpdateRouteCalculatorResponsePrivate(UpdateRouteCalculatorResponse * const q);

    void parseUpdateRouteCalculatorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRouteCalculatorResponse)
    Q_DISABLE_COPY(UpdateRouteCalculatorResponsePrivate)

};

} // namespace Location
} // namespace QtAws

#endif
