// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWHATIFANALYSESREQUEST_P_H
#define QTAWS_LISTWHATIFANALYSESREQUEST_P_H

#include "forecastrequest_p.h"
#include "listwhatifanalysesrequest.h"

namespace QtAws {
namespace Forecast {

class ListWhatIfAnalysesRequest;

class ListWhatIfAnalysesRequestPrivate : public ForecastRequestPrivate {

public:
    ListWhatIfAnalysesRequestPrivate(const ForecastRequest::Action action,
                                   ListWhatIfAnalysesRequest * const q);
    ListWhatIfAnalysesRequestPrivate(const ListWhatIfAnalysesRequestPrivate &other,
                                   ListWhatIfAnalysesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListWhatIfAnalysesRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
