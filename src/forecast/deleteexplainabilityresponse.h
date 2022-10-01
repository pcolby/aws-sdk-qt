// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEXPLAINABILITYRESPONSE_H
#define QTAWS_DELETEEXPLAINABILITYRESPONSE_H

#include "forecastresponse.h"
#include "deleteexplainabilityrequest.h"

namespace QtAws {
namespace Forecast {

class DeleteExplainabilityResponsePrivate;

class QTAWSFORECAST_EXPORT DeleteExplainabilityResponse : public ForecastResponse {
    Q_OBJECT

public:
    DeleteExplainabilityResponse(const DeleteExplainabilityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteExplainabilityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteExplainabilityResponse)
    Q_DISABLE_COPY(DeleteExplainabilityResponse)

};

} // namespace Forecast
} // namespace QtAws

#endif
