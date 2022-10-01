// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPREDICTORBACKTESTEXPORTJOBRESPONSE_H
#define QTAWS_DELETEPREDICTORBACKTESTEXPORTJOBRESPONSE_H

#include "forecastresponse.h"
#include "deletepredictorbacktestexportjobrequest.h"

namespace QtAws {
namespace Forecast {

class DeletePredictorBacktestExportJobResponsePrivate;

class QTAWSFORECAST_EXPORT DeletePredictorBacktestExportJobResponse : public ForecastResponse {
    Q_OBJECT

public:
    DeletePredictorBacktestExportJobResponse(const DeletePredictorBacktestExportJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeletePredictorBacktestExportJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePredictorBacktestExportJobResponse)
    Q_DISABLE_COPY(DeletePredictorBacktestExportJobResponse)

};

} // namespace Forecast
} // namespace QtAws

#endif
