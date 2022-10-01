// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPREDICTORBACKTESTEXPORTJOBREQUEST_P_H
#define QTAWS_DELETEPREDICTORBACKTESTEXPORTJOBREQUEST_P_H

#include "forecastrequest_p.h"
#include "deletepredictorbacktestexportjobrequest.h"

namespace QtAws {
namespace Forecast {

class DeletePredictorBacktestExportJobRequest;

class DeletePredictorBacktestExportJobRequestPrivate : public ForecastRequestPrivate {

public:
    DeletePredictorBacktestExportJobRequestPrivate(const ForecastRequest::Action action,
                                   DeletePredictorBacktestExportJobRequest * const q);
    DeletePredictorBacktestExportJobRequestPrivate(const DeletePredictorBacktestExportJobRequestPrivate &other,
                                   DeletePredictorBacktestExportJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePredictorBacktestExportJobRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
