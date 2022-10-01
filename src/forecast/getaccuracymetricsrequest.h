// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCURACYMETRICSREQUEST_H
#define QTAWS_GETACCURACYMETRICSREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class GetAccuracyMetricsRequestPrivate;

class QTAWSFORECAST_EXPORT GetAccuracyMetricsRequest : public ForecastRequest {

public:
    GetAccuracyMetricsRequest(const GetAccuracyMetricsRequest &other);
    GetAccuracyMetricsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAccuracyMetricsRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
