// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXPLAINABILITIESRESPONSE_H
#define QTAWS_LISTEXPLAINABILITIESRESPONSE_H

#include "forecastresponse.h"
#include "listexplainabilitiesrequest.h"

namespace QtAws {
namespace Forecast {

class ListExplainabilitiesResponsePrivate;

class QTAWSFORECAST_EXPORT ListExplainabilitiesResponse : public ForecastResponse {
    Q_OBJECT

public:
    ListExplainabilitiesResponse(const ListExplainabilitiesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListExplainabilitiesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListExplainabilitiesResponse)
    Q_DISABLE_COPY(ListExplainabilitiesResponse)

};

} // namespace Forecast
} // namespace QtAws

#endif
