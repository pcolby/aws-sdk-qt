// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROUTECALCULATORRESPONSE_P_H
#define QTAWS_DELETEROUTECALCULATORRESPONSE_P_H

#include "locationresponse_p.h"

namespace QtAws {
namespace Location {

class DeleteRouteCalculatorResponse;

class DeleteRouteCalculatorResponsePrivate : public LocationResponsePrivate {

public:

    explicit DeleteRouteCalculatorResponsePrivate(DeleteRouteCalculatorResponse * const q);

    void parseDeleteRouteCalculatorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRouteCalculatorResponse)
    Q_DISABLE_COPY(DeleteRouteCalculatorResponsePrivate)

};

} // namespace Location
} // namespace QtAws

#endif
