// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPREDICTORRESPONSE_H
#define QTAWS_CREATEPREDICTORRESPONSE_H

#include "forecastresponse.h"
#include "createpredictorrequest.h"

namespace QtAws {
namespace Forecast {

class CreatePredictorResponsePrivate;

class QTAWSFORECAST_EXPORT CreatePredictorResponse : public ForecastResponse {
    Q_OBJECT

public:
    CreatePredictorResponse(const CreatePredictorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreatePredictorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePredictorResponse)
    Q_DISABLE_COPY(CreatePredictorResponse)

};

} // namespace Forecast
} // namespace QtAws

#endif
