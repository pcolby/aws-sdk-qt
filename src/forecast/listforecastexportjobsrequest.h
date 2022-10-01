// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFORECASTEXPORTJOBSREQUEST_H
#define QTAWS_LISTFORECASTEXPORTJOBSREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class ListForecastExportJobsRequestPrivate;

class QTAWSFORECAST_EXPORT ListForecastExportJobsRequest : public ForecastRequest {

public:
    ListForecastExportJobsRequest(const ListForecastExportJobsRequest &other);
    ListForecastExportJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListForecastExportJobsRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
