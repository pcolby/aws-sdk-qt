// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWHATIFFORECASTEXPORTREQUEST_H
#define QTAWS_DESCRIBEWHATIFFORECASTEXPORTREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class DescribeWhatIfForecastExportRequestPrivate;

class QTAWSFORECAST_EXPORT DescribeWhatIfForecastExportRequest : public ForecastRequest {

public:
    DescribeWhatIfForecastExportRequest(const DescribeWhatIfForecastExportRequest &other);
    DescribeWhatIfForecastExportRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeWhatIfForecastExportRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
