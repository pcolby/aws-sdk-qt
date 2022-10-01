// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWHATIFFORECASTSREQUEST_H
#define QTAWS_LISTWHATIFFORECASTSREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class ListWhatIfForecastsRequestPrivate;

class QTAWSFORECAST_EXPORT ListWhatIfForecastsRequest : public ForecastRequest {

public:
    ListWhatIfForecastsRequest(const ListWhatIfForecastsRequest &other);
    ListWhatIfForecastsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListWhatIfForecastsRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
