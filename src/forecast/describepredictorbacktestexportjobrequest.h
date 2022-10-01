// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPREDICTORBACKTESTEXPORTJOBREQUEST_H
#define QTAWS_DESCRIBEPREDICTORBACKTESTEXPORTJOBREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class DescribePredictorBacktestExportJobRequestPrivate;

class QTAWSFORECAST_EXPORT DescribePredictorBacktestExportJobRequest : public ForecastRequest {

public:
    DescribePredictorBacktestExportJobRequest(const DescribePredictorBacktestExportJobRequest &other);
    DescribePredictorBacktestExportJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePredictorBacktestExportJobRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
