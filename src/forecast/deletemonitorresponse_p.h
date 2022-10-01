// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMONITORRESPONSE_P_H
#define QTAWS_DELETEMONITORRESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class DeleteMonitorResponse;

class DeleteMonitorResponsePrivate : public ForecastResponsePrivate {

public:

    explicit DeleteMonitorResponsePrivate(DeleteMonitorResponse * const q);

    void parseDeleteMonitorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteMonitorResponse)
    Q_DISABLE_COPY(DeleteMonitorResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
