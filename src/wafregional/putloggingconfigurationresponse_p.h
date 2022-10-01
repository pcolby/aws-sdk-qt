// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTLOGGINGCONFIGURATIONRESPONSE_P_H
#define QTAWS_PUTLOGGINGCONFIGURATIONRESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class PutLoggingConfigurationResponse;

class PutLoggingConfigurationResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit PutLoggingConfigurationResponsePrivate(PutLoggingConfigurationResponse * const q);

    void parsePutLoggingConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutLoggingConfigurationResponse)
    Q_DISABLE_COPY(PutLoggingConfigurationResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
