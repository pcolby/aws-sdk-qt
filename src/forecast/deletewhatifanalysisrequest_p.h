// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWHATIFANALYSISREQUEST_P_H
#define QTAWS_DELETEWHATIFANALYSISREQUEST_P_H

#include "forecastrequest_p.h"
#include "deletewhatifanalysisrequest.h"

namespace QtAws {
namespace Forecast {

class DeleteWhatIfAnalysisRequest;

class DeleteWhatIfAnalysisRequestPrivate : public ForecastRequestPrivate {

public:
    DeleteWhatIfAnalysisRequestPrivate(const ForecastRequest::Action action,
                                   DeleteWhatIfAnalysisRequest * const q);
    DeleteWhatIfAnalysisRequestPrivate(const DeleteWhatIfAnalysisRequestPrivate &other,
                                   DeleteWhatIfAnalysisRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteWhatIfAnalysisRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
