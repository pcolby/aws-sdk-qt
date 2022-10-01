// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCONFIGURATIONRECORDERRESPONSE_P_H
#define QTAWS_STARTCONFIGURATIONRECORDERRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class StartConfigurationRecorderResponse;

class StartConfigurationRecorderResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit StartConfigurationRecorderResponsePrivate(StartConfigurationRecorderResponse * const q);

    void parseStartConfigurationRecorderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartConfigurationRecorderResponse)
    Q_DISABLE_COPY(StartConfigurationRecorderResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
