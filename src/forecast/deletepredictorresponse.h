// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPREDICTORRESPONSE_H
#define QTAWS_DELETEPREDICTORRESPONSE_H

#include "forecastresponse.h"
#include "deletepredictorrequest.h"

namespace QtAws {
namespace Forecast {

class DeletePredictorResponsePrivate;

class QTAWSFORECAST_EXPORT DeletePredictorResponse : public ForecastResponse {
    Q_OBJECT

public:
    DeletePredictorResponse(const DeletePredictorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeletePredictorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePredictorResponse)
    Q_DISABLE_COPY(DeletePredictorResponse)

};

} // namespace Forecast
} // namespace QtAws

#endif
