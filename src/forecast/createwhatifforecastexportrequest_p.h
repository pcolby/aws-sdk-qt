// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWHATIFFORECASTEXPORTREQUEST_P_H
#define QTAWS_CREATEWHATIFFORECASTEXPORTREQUEST_P_H

#include "forecastrequest_p.h"
#include "createwhatifforecastexportrequest.h"

namespace QtAws {
namespace Forecast {

class CreateWhatIfForecastExportRequest;

class CreateWhatIfForecastExportRequestPrivate : public ForecastRequestPrivate {

public:
    CreateWhatIfForecastExportRequestPrivate(const ForecastRequest::Action action,
                                   CreateWhatIfForecastExportRequest * const q);
    CreateWhatIfForecastExportRequestPrivate(const CreateWhatIfForecastExportRequestPrivate &other,
                                   CreateWhatIfForecastExportRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateWhatIfForecastExportRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
