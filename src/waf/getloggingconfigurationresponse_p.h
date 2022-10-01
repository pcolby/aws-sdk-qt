// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOGGINGCONFIGURATIONRESPONSE_P_H
#define QTAWS_GETLOGGINGCONFIGURATIONRESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class GetLoggingConfigurationResponse;

class GetLoggingConfigurationResponsePrivate : public WafResponsePrivate {

public:

    explicit GetLoggingConfigurationResponsePrivate(GetLoggingConfigurationResponse * const q);

    void parseGetLoggingConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetLoggingConfigurationResponse)
    Q_DISABLE_COPY(GetLoggingConfigurationResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
