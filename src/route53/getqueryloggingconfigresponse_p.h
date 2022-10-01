// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETQUERYLOGGINGCONFIGRESPONSE_P_H
#define QTAWS_GETQUERYLOGGINGCONFIGRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class GetQueryLoggingConfigResponse;

class GetQueryLoggingConfigResponsePrivate : public Route53ResponsePrivate {

public:

    explicit GetQueryLoggingConfigResponsePrivate(GetQueryLoggingConfigResponse * const q);

    void parseGetQueryLoggingConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetQueryLoggingConfigResponse)
    Q_DISABLE_COPY(GetQueryLoggingConfigResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif
