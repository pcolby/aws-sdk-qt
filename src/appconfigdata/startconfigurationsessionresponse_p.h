// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCONFIGURATIONSESSIONRESPONSE_P_H
#define QTAWS_STARTCONFIGURATIONSESSIONRESPONSE_P_H

#include "appconfigdataresponse_p.h"

namespace QtAws {
namespace AppConfigData {

class StartConfigurationSessionResponse;

class StartConfigurationSessionResponsePrivate : public AppConfigDataResponsePrivate {

public:

    explicit StartConfigurationSessionResponsePrivate(StartConfigurationSessionResponse * const q);

    void parseStartConfigurationSessionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartConfigurationSessionResponse)
    Q_DISABLE_COPY(StartConfigurationSessionResponsePrivate)

};

} // namespace AppConfigData
} // namespace QtAws

#endif
