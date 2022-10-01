// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMONITORRESPONSE_P_H
#define QTAWS_CREATEMONITORRESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class CreateMonitorResponse;

class CreateMonitorResponsePrivate : public ForecastResponsePrivate {

public:

    explicit CreateMonitorResponsePrivate(CreateMonitorResponse * const q);

    void parseCreateMonitorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateMonitorResponse)
    Q_DISABLE_COPY(CreateMonitorResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
