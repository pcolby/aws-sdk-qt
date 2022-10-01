// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPREDICTORBACKTESTEXPORTJOBRESPONSE_H
#define QTAWS_CREATEPREDICTORBACKTESTEXPORTJOBRESPONSE_H

#include "forecastresponse.h"
#include "createpredictorbacktestexportjobrequest.h"

namespace QtAws {
namespace Forecast {

class CreatePredictorBacktestExportJobResponsePrivate;

class QTAWSFORECAST_EXPORT CreatePredictorBacktestExportJobResponse : public ForecastResponse {
    Q_OBJECT

public:
    CreatePredictorBacktestExportJobResponse(const CreatePredictorBacktestExportJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreatePredictorBacktestExportJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePredictorBacktestExportJobResponse)
    Q_DISABLE_COPY(CreatePredictorBacktestExportJobResponse)

};

} // namespace Forecast
} // namespace QtAws

#endif
