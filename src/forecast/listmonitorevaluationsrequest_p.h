// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMONITOREVALUATIONSREQUEST_P_H
#define QTAWS_LISTMONITOREVALUATIONSREQUEST_P_H

#include "forecastrequest_p.h"
#include "listmonitorevaluationsrequest.h"

namespace QtAws {
namespace Forecast {

class ListMonitorEvaluationsRequest;

class ListMonitorEvaluationsRequestPrivate : public ForecastRequestPrivate {

public:
    ListMonitorEvaluationsRequestPrivate(const ForecastRequest::Action action,
                                   ListMonitorEvaluationsRequest * const q);
    ListMonitorEvaluationsRequestPrivate(const ListMonitorEvaluationsRequestPrivate &other,
                                   ListMonitorEvaluationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListMonitorEvaluationsRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
