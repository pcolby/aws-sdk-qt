// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFORECASTEXPORTJOBREQUEST_P_H
#define QTAWS_CREATEFORECASTEXPORTJOBREQUEST_P_H

#include "forecastrequest_p.h"
#include "createforecastexportjobrequest.h"

namespace QtAws {
namespace Forecast {

class CreateForecastExportJobRequest;

class CreateForecastExportJobRequestPrivate : public ForecastRequestPrivate {

public:
    CreateForecastExportJobRequestPrivate(const ForecastRequest::Action action,
                                   CreateForecastExportJobRequest * const q);
    CreateForecastExportJobRequestPrivate(const CreateForecastExportJobRequestPrivate &other,
                                   CreateForecastExportJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateForecastExportJobRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
