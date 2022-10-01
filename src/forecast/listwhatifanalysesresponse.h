// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWHATIFANALYSESRESPONSE_H
#define QTAWS_LISTWHATIFANALYSESRESPONSE_H

#include "forecastresponse.h"
#include "listwhatifanalysesrequest.h"

namespace QtAws {
namespace Forecast {

class ListWhatIfAnalysesResponsePrivate;

class QTAWSFORECAST_EXPORT ListWhatIfAnalysesResponse : public ForecastResponse {
    Q_OBJECT

public:
    ListWhatIfAnalysesResponse(const ListWhatIfAnalysesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListWhatIfAnalysesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListWhatIfAnalysesResponse)
    Q_DISABLE_COPY(ListWhatIfAnalysesResponse)

};

} // namespace Forecast
} // namespace QtAws

#endif
