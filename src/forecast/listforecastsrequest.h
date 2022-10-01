// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFORECASTSREQUEST_H
#define QTAWS_LISTFORECASTSREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class ListForecastsRequestPrivate;

class QTAWSFORECAST_EXPORT ListForecastsRequest : public ForecastRequest {

public:
    ListForecastsRequest(const ListForecastsRequest &other);
    ListForecastsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListForecastsRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
