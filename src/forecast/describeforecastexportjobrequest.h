// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFORECASTEXPORTJOBREQUEST_H
#define QTAWS_DESCRIBEFORECASTEXPORTJOBREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class DescribeForecastExportJobRequestPrivate;

class QTAWSFORECAST_EXPORT DescribeForecastExportJobRequest : public ForecastRequest {

public:
    DescribeForecastExportJobRequest(const DescribeForecastExportJobRequest &other);
    DescribeForecastExportJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeForecastExportJobRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
