// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWHATIFANALYSISREQUEST_H
#define QTAWS_CREATEWHATIFANALYSISREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class CreateWhatIfAnalysisRequestPrivate;

class QTAWSFORECAST_EXPORT CreateWhatIfAnalysisRequest : public ForecastRequest {

public:
    CreateWhatIfAnalysisRequest(const CreateWhatIfAnalysisRequest &other);
    CreateWhatIfAnalysisRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWhatIfAnalysisRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
