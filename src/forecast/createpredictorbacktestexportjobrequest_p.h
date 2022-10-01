// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPREDICTORBACKTESTEXPORTJOBREQUEST_P_H
#define QTAWS_CREATEPREDICTORBACKTESTEXPORTJOBREQUEST_P_H

#include "forecastrequest_p.h"
#include "createpredictorbacktestexportjobrequest.h"

namespace QtAws {
namespace Forecast {

class CreatePredictorBacktestExportJobRequest;

class CreatePredictorBacktestExportJobRequestPrivate : public ForecastRequestPrivate {

public:
    CreatePredictorBacktestExportJobRequestPrivate(const ForecastRequest::Action action,
                                   CreatePredictorBacktestExportJobRequest * const q);
    CreatePredictorBacktestExportJobRequestPrivate(const CreatePredictorBacktestExportJobRequestPrivate &other,
                                   CreatePredictorBacktestExportJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePredictorBacktestExportJobRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
