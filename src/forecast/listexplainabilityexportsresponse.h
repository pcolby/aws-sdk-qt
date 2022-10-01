// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXPLAINABILITYEXPORTSRESPONSE_H
#define QTAWS_LISTEXPLAINABILITYEXPORTSRESPONSE_H

#include "forecastresponse.h"
#include "listexplainabilityexportsrequest.h"

namespace QtAws {
namespace Forecast {

class ListExplainabilityExportsResponsePrivate;

class QTAWSFORECAST_EXPORT ListExplainabilityExportsResponse : public ForecastResponse {
    Q_OBJECT

public:
    ListExplainabilityExportsResponse(const ListExplainabilityExportsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListExplainabilityExportsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListExplainabilityExportsResponse)
    Q_DISABLE_COPY(ListExplainabilityExportsResponse)

};

} // namespace Forecast
} // namespace QtAws

#endif
