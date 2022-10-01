// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CALCULATEROUTEMATRIXRESPONSE_P_H
#define QTAWS_CALCULATEROUTEMATRIXRESPONSE_P_H

#include "locationresponse_p.h"

namespace QtAws {
namespace Location {

class CalculateRouteMatrixResponse;

class CalculateRouteMatrixResponsePrivate : public LocationResponsePrivate {

public:

    explicit CalculateRouteMatrixResponsePrivate(CalculateRouteMatrixResponse * const q);

    void parseCalculateRouteMatrixResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CalculateRouteMatrixResponse)
    Q_DISABLE_COPY(CalculateRouteMatrixResponsePrivate)

};

} // namespace Location
} // namespace QtAws

#endif
