// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLOGGINGCONFIGURATIONSRESPONSE_P_H
#define QTAWS_LISTLOGGINGCONFIGURATIONSRESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class ListLoggingConfigurationsResponse;

class ListLoggingConfigurationsResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit ListLoggingConfigurationsResponsePrivate(ListLoggingConfigurationsResponse * const q);

    void parseListLoggingConfigurationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListLoggingConfigurationsResponse)
    Q_DISABLE_COPY(ListLoggingConfigurationsResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
