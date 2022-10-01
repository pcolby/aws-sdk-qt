// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOGGINGCONFIGURATIONRESPONSE_P_H
#define QTAWS_DELETELOGGINGCONFIGURATIONRESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class DeleteLoggingConfigurationResponse;

class DeleteLoggingConfigurationResponsePrivate : public WafResponsePrivate {

public:

    explicit DeleteLoggingConfigurationResponsePrivate(DeleteLoggingConfigurationResponse * const q);

    void parseDeleteLoggingConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteLoggingConfigurationResponse)
    Q_DISABLE_COPY(DeleteLoggingConfigurationResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
