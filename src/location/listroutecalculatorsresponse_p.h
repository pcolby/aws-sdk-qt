// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROUTECALCULATORSRESPONSE_P_H
#define QTAWS_LISTROUTECALCULATORSRESPONSE_P_H

#include "locationresponse_p.h"

namespace QtAws {
namespace Location {

class ListRouteCalculatorsResponse;

class ListRouteCalculatorsResponsePrivate : public LocationResponsePrivate {

public:

    explicit ListRouteCalculatorsResponsePrivate(ListRouteCalculatorsResponse * const q);

    void parseListRouteCalculatorsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRouteCalculatorsResponse)
    Q_DISABLE_COPY(ListRouteCalculatorsResponsePrivate)

};

} // namespace Location
} // namespace QtAws

#endif
