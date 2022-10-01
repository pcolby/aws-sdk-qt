// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELOGGINGCONFIGURATIONRESPONSE_P_H
#define QTAWS_UPDATELOGGINGCONFIGURATIONRESPONSE_P_H

#include "ampresponse_p.h"

namespace QtAws {
namespace Amp {

class UpdateLoggingConfigurationResponse;

class UpdateLoggingConfigurationResponsePrivate : public AmpResponsePrivate {

public:

    explicit UpdateLoggingConfigurationResponsePrivate(UpdateLoggingConfigurationResponse * const q);

    void parseUpdateLoggingConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateLoggingConfigurationResponse)
    Q_DISABLE_COPY(UpdateLoggingConfigurationResponsePrivate)

};

} // namespace Amp
} // namespace QtAws

#endif
