// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWHATIFANALYSISREQUEST_P_H
#define QTAWS_CREATEWHATIFANALYSISREQUEST_P_H

#include "forecastrequest_p.h"
#include "createwhatifanalysisrequest.h"

namespace QtAws {
namespace Forecast {

class CreateWhatIfAnalysisRequest;

class CreateWhatIfAnalysisRequestPrivate : public ForecastRequestPrivate {

public:
    CreateWhatIfAnalysisRequestPrivate(const ForecastRequest::Action action,
                                   CreateWhatIfAnalysisRequest * const q);
    CreateWhatIfAnalysisRequestPrivate(const CreateWhatIfAnalysisRequestPrivate &other,
                                   CreateWhatIfAnalysisRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateWhatIfAnalysisRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
