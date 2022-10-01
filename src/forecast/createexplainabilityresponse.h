// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEXPLAINABILITYRESPONSE_H
#define QTAWS_CREATEEXPLAINABILITYRESPONSE_H

#include "forecastresponse.h"
#include "createexplainabilityrequest.h"

namespace QtAws {
namespace Forecast {

class CreateExplainabilityResponsePrivate;

class QTAWSFORECAST_EXPORT CreateExplainabilityResponse : public ForecastResponse {
    Q_OBJECT

public:
    CreateExplainabilityResponse(const CreateExplainabilityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateExplainabilityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateExplainabilityResponse)
    Q_DISABLE_COPY(CreateExplainabilityResponse)

};

} // namespace Forecast
} // namespace QtAws

#endif
