// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPCONFIGURATIONRECORDERRESPONSE_P_H
#define QTAWS_STOPCONFIGURATIONRECORDERRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class StopConfigurationRecorderResponse;

class StopConfigurationRecorderResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit StopConfigurationRecorderResponsePrivate(StopConfigurationRecorderResponse * const q);

    void parseStopConfigurationRecorderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopConfigurationRecorderResponse)
    Q_DISABLE_COPY(StopConfigurationRecorderResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
