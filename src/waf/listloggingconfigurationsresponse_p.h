// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLOGGINGCONFIGURATIONSRESPONSE_P_H
#define QTAWS_LISTLOGGINGCONFIGURATIONSRESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class ListLoggingConfigurationsResponse;

class ListLoggingConfigurationsResponsePrivate : public WafResponsePrivate {

public:

    explicit ListLoggingConfigurationsResponsePrivate(ListLoggingConfigurationsResponse * const q);

    void parseListLoggingConfigurationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListLoggingConfigurationsResponse)
    Q_DISABLE_COPY(ListLoggingConfigurationsResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
