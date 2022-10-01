// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEQUERYLOGGINGCONFIGRESPONSE_P_H
#define QTAWS_DELETEQUERYLOGGINGCONFIGRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class DeleteQueryLoggingConfigResponse;

class DeleteQueryLoggingConfigResponsePrivate : public Route53ResponsePrivate {

public:

    explicit DeleteQueryLoggingConfigResponsePrivate(DeleteQueryLoggingConfigResponse * const q);

    void parseDeleteQueryLoggingConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteQueryLoggingConfigResponse)
    Q_DISABLE_COPY(DeleteQueryLoggingConfigResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif
