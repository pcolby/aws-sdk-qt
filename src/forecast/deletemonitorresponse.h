// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMONITORRESPONSE_H
#define QTAWS_DELETEMONITORRESPONSE_H

#include "forecastresponse.h"
#include "deletemonitorrequest.h"

namespace QtAws {
namespace Forecast {

class DeleteMonitorResponsePrivate;

class QTAWSFORECAST_EXPORT DeleteMonitorResponse : public ForecastResponse {
    Q_OBJECT

public:
    DeleteMonitorResponse(const DeleteMonitorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteMonitorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMonitorResponse)
    Q_DISABLE_COPY(DeleteMonitorResponse)

};

} // namespace Forecast
} // namespace QtAws

#endif
