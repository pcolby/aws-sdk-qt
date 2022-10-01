// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPREDICTORSRESPONSE_H
#define QTAWS_LISTPREDICTORSRESPONSE_H

#include "forecastresponse.h"
#include "listpredictorsrequest.h"

namespace QtAws {
namespace Forecast {

class ListPredictorsResponsePrivate;

class QTAWSFORECAST_EXPORT ListPredictorsResponse : public ForecastResponse {
    Q_OBJECT

public:
    ListPredictorsResponse(const ListPredictorsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPredictorsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPredictorsResponse)
    Q_DISABLE_COPY(ListPredictorsResponse)

};

} // namespace Forecast
} // namespace QtAws

#endif
