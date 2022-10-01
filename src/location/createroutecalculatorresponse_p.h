// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROUTECALCULATORRESPONSE_P_H
#define QTAWS_CREATEROUTECALCULATORRESPONSE_P_H

#include "locationresponse_p.h"

namespace QtAws {
namespace Location {

class CreateRouteCalculatorResponse;

class CreateRouteCalculatorResponsePrivate : public LocationResponsePrivate {

public:

    explicit CreateRouteCalculatorResponsePrivate(CreateRouteCalculatorResponse * const q);

    void parseCreateRouteCalculatorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateRouteCalculatorResponse)
    Q_DISABLE_COPY(CreateRouteCalculatorResponsePrivate)

};

} // namespace Location
} // namespace QtAws

#endif
