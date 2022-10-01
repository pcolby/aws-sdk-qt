// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWHATIFFORECASTREQUEST_H
#define QTAWS_DESCRIBEWHATIFFORECASTREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class DescribeWhatIfForecastRequestPrivate;

class QTAWSFORECAST_EXPORT DescribeWhatIfForecastRequest : public ForecastRequest {

public:
    DescribeWhatIfForecastRequest(const DescribeWhatIfForecastRequest &other);
    DescribeWhatIfForecastRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeWhatIfForecastRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
