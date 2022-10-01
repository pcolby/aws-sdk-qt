// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPRESOURCERESPONSE_H
#define QTAWS_STOPRESOURCERESPONSE_H

#include "forecastresponse.h"
#include "stopresourcerequest.h"

namespace QtAws {
namespace Forecast {

class StopResourceResponsePrivate;

class QTAWSFORECAST_EXPORT StopResourceResponse : public ForecastResponse {
    Q_OBJECT

public:
    StopResourceResponse(const StopResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopResourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopResourceResponse)
    Q_DISABLE_COPY(StopResourceResponse)

};

} // namespace Forecast
} // namespace QtAws

#endif
