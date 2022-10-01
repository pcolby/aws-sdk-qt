// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREGIONSRESPONSE_P_H
#define QTAWS_GETREGIONSRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetRegionsResponse;

class GetRegionsResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetRegionsResponsePrivate(GetRegionsResponse * const q);

    void parseGetRegionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRegionsResponse)
    Q_DISABLE_COPY(GetRegionsResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
