// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMONITOREVALUATIONSREQUEST_H
#define QTAWS_LISTMONITOREVALUATIONSREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class ListMonitorEvaluationsRequestPrivate;

class QTAWSFORECAST_EXPORT ListMonitorEvaluationsRequest : public ForecastRequest {

public:
    ListMonitorEvaluationsRequest(const ListMonitorEvaluationsRequest &other);
    ListMonitorEvaluationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMonitorEvaluationsRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
