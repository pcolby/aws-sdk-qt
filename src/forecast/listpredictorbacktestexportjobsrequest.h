// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPREDICTORBACKTESTEXPORTJOBSREQUEST_H
#define QTAWS_LISTPREDICTORBACKTESTEXPORTJOBSREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class ListPredictorBacktestExportJobsRequestPrivate;

class QTAWSFORECAST_EXPORT ListPredictorBacktestExportJobsRequest : public ForecastRequest {

public:
    ListPredictorBacktestExportJobsRequest(const ListPredictorBacktestExportJobsRequest &other);
    ListPredictorBacktestExportJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPredictorBacktestExportJobsRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
