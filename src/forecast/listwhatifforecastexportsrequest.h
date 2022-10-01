// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWHATIFFORECASTEXPORTSREQUEST_H
#define QTAWS_LISTWHATIFFORECASTEXPORTSREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class ListWhatIfForecastExportsRequestPrivate;

class QTAWSFORECAST_EXPORT ListWhatIfForecastExportsRequest : public ForecastRequest {

public:
    ListWhatIfForecastExportsRequest(const ListWhatIfForecastExportsRequest &other);
    ListWhatIfForecastExportsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListWhatIfForecastExportsRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
