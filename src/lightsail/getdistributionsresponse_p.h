// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISTRIBUTIONSRESPONSE_P_H
#define QTAWS_GETDISTRIBUTIONSRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetDistributionsResponse;

class GetDistributionsResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetDistributionsResponsePrivate(GetDistributionsResponse * const q);

    void parseGetDistributionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDistributionsResponse)
    Q_DISABLE_COPY(GetDistributionsResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
