// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFORECASTEXPORTJOBREQUEST_P_H
#define QTAWS_DELETEFORECASTEXPORTJOBREQUEST_P_H

#include "forecastrequest_p.h"
#include "deleteforecastexportjobrequest.h"

namespace QtAws {
namespace Forecast {

class DeleteForecastExportJobRequest;

class DeleteForecastExportJobRequestPrivate : public ForecastRequestPrivate {

public:
    DeleteForecastExportJobRequestPrivate(const ForecastRequest::Action action,
                                   DeleteForecastExportJobRequest * const q);
    DeleteForecastExportJobRequestPrivate(const DeleteForecastExportJobRequestPrivate &other,
                                   DeleteForecastExportJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteForecastExportJobRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
