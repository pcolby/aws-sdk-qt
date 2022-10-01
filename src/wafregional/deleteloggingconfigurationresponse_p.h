// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOGGINGCONFIGURATIONRESPONSE_P_H
#define QTAWS_DELETELOGGINGCONFIGURATIONRESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class DeleteLoggingConfigurationResponse;

class DeleteLoggingConfigurationResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit DeleteLoggingConfigurationResponsePrivate(DeleteLoggingConfigurationResponse * const q);

    void parseDeleteLoggingConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteLoggingConfigurationResponse)
    Q_DISABLE_COPY(DeleteLoggingConfigurationResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
