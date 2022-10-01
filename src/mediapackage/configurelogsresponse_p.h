// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIGURELOGSRESPONSE_P_H
#define QTAWS_CONFIGURELOGSRESPONSE_P_H

#include "mediapackageresponse_p.h"

namespace QtAws {
namespace MediaPackage {

class ConfigureLogsResponse;

class ConfigureLogsResponsePrivate : public MediaPackageResponsePrivate {

public:

    explicit ConfigureLogsResponsePrivate(ConfigureLogsResponse * const q);

    void parseConfigureLogsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ConfigureLogsResponse)
    Q_DISABLE_COPY(ConfigureLogsResponsePrivate)

};

} // namespace MediaPackage
} // namespace QtAws

#endif
