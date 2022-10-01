// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGEOLOCATIONRESPONSE_P_H
#define QTAWS_GETGEOLOCATIONRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class GetGeoLocationResponse;

class GetGeoLocationResponsePrivate : public Route53ResponsePrivate {

public:

    explicit GetGeoLocationResponsePrivate(GetGeoLocationResponse * const q);

    void parseGetGeoLocationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetGeoLocationResponse)
    Q_DISABLE_COPY(GetGeoLocationResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif
