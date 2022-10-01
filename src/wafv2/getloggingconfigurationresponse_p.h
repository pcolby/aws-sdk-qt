// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOGGINGCONFIGURATIONRESPONSE_P_H
#define QTAWS_GETLOGGINGCONFIGURATIONRESPONSE_P_H

#include "wafv2response_p.h"

namespace QtAws {
namespace Wafv2 {

class GetLoggingConfigurationResponse;

class GetLoggingConfigurationResponsePrivate : public Wafv2ResponsePrivate {

public:

    explicit GetLoggingConfigurationResponsePrivate(GetLoggingConfigurationResponse * const q);

    void parseGetLoggingConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetLoggingConfigurationResponse)
    Q_DISABLE_COPY(GetLoggingConfigurationResponsePrivate)

};

} // namespace Wafv2
} // namespace QtAws

#endif
