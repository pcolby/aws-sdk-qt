// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAUTOPREDICTORRESPONSE_H
#define QTAWS_CREATEAUTOPREDICTORRESPONSE_H

#include "forecastresponse.h"
#include "createautopredictorrequest.h"

namespace QtAws {
namespace Forecast {

class CreateAutoPredictorResponsePrivate;

class QTAWSFORECAST_EXPORT CreateAutoPredictorResponse : public ForecastResponse {
    Q_OBJECT

public:
    CreateAutoPredictorResponse(const CreateAutoPredictorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAutoPredictorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAutoPredictorResponse)
    Q_DISABLE_COPY(CreateAutoPredictorResponse)

};

} // namespace Forecast
} // namespace QtAws

#endif
