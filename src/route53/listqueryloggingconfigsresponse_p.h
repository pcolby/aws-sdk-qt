// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTQUERYLOGGINGCONFIGSRESPONSE_P_H
#define QTAWS_LISTQUERYLOGGINGCONFIGSRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class ListQueryLoggingConfigsResponse;

class ListQueryLoggingConfigsResponsePrivate : public Route53ResponsePrivate {

public:

    explicit ListQueryLoggingConfigsResponsePrivate(ListQueryLoggingConfigsResponse * const q);

    void parseListQueryLoggingConfigsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListQueryLoggingConfigsResponse)
    Q_DISABLE_COPY(ListQueryLoggingConfigsResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif
