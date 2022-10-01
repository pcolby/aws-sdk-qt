// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWHATIFANALYSISRESPONSE_H
#define QTAWS_CREATEWHATIFANALYSISRESPONSE_H

#include "forecastresponse.h"
#include "createwhatifanalysisrequest.h"

namespace QtAws {
namespace Forecast {

class CreateWhatIfAnalysisResponsePrivate;

class QTAWSFORECAST_EXPORT CreateWhatIfAnalysisResponse : public ForecastResponse {
    Q_OBJECT

public:
    CreateWhatIfAnalysisResponse(const CreateWhatIfAnalysisRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateWhatIfAnalysisRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWhatIfAnalysisResponse)
    Q_DISABLE_COPY(CreateWhatIfAnalysisResponse)

};

} // namespace Forecast
} // namespace QtAws

#endif
