// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIGURELOGSRESPONSE_P_H
#define QTAWS_CONFIGURELOGSRESPONSE_P_H

#include "mediapackagevodresponse_p.h"

namespace QtAws {
namespace MediaPackageVod {

class ConfigureLogsResponse;

class ConfigureLogsResponsePrivate : public MediaPackageVodResponsePrivate {

public:

    explicit ConfigureLogsResponsePrivate(ConfigureLogsResponse * const q);

    void parseConfigureLogsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ConfigureLogsResponse)
    Q_DISABLE_COPY(ConfigureLogsResponsePrivate)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
