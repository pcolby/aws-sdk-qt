// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWHATIFFORECASTEXPORTREQUEST_P_H
#define QTAWS_DELETEWHATIFFORECASTEXPORTREQUEST_P_H

#include "forecastrequest_p.h"
#include "deletewhatifforecastexportrequest.h"

namespace QtAws {
namespace Forecast {

class DeleteWhatIfForecastExportRequest;

class DeleteWhatIfForecastExportRequestPrivate : public ForecastRequestPrivate {

public:
    DeleteWhatIfForecastExportRequestPrivate(const ForecastRequest::Action action,
                                   DeleteWhatIfForecastExportRequest * const q);
    DeleteWhatIfForecastExportRequestPrivate(const DeleteWhatIfForecastExportRequestPrivate &other,
                                   DeleteWhatIfForecastExportRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteWhatIfForecastExportRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
