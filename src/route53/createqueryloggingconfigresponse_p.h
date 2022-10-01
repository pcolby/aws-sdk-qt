// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEQUERYLOGGINGCONFIGRESPONSE_P_H
#define QTAWS_CREATEQUERYLOGGINGCONFIGRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class CreateQueryLoggingConfigResponse;

class CreateQueryLoggingConfigResponsePrivate : public Route53ResponsePrivate {

public:

    explicit CreateQueryLoggingConfigResponsePrivate(CreateQueryLoggingConfigResponse * const q);

    void parseCreateQueryLoggingConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateQueryLoggingConfigResponse)
    Q_DISABLE_COPY(CreateQueryLoggingConfigResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif
