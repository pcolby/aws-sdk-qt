// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTLOGGINGCONFIGURATIONRESPONSE_P_H
#define QTAWS_PUTLOGGINGCONFIGURATIONRESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class PutLoggingConfigurationResponse;

class PutLoggingConfigurationResponsePrivate : public WafResponsePrivate {

public:

    explicit PutLoggingConfigurationResponsePrivate(PutLoggingConfigurationResponse * const q);

    void parsePutLoggingConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutLoggingConfigurationResponse)
    Q_DISABLE_COPY(PutLoggingConfigurationResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
