// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIGURELOGSFORPLAYBACKCONFIGURATIONRESPONSE_P_H
#define QTAWS_CONFIGURELOGSFORPLAYBACKCONFIGURATIONRESPONSE_P_H

#include "mediatailorresponse_p.h"

namespace QtAws {
namespace MediaTailor {

class ConfigureLogsForPlaybackConfigurationResponse;

class ConfigureLogsForPlaybackConfigurationResponsePrivate : public MediaTailorResponsePrivate {

public:

    explicit ConfigureLogsForPlaybackConfigurationResponsePrivate(ConfigureLogsForPlaybackConfigurationResponse * const q);

    void parseConfigureLogsForPlaybackConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ConfigureLogsForPlaybackConfigurationResponse)
    Q_DISABLE_COPY(ConfigureLogsForPlaybackConfigurationResponsePrivate)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
