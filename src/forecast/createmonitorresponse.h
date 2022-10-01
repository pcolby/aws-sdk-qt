// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMONITORRESPONSE_H
#define QTAWS_CREATEMONITORRESPONSE_H

#include "forecastresponse.h"
#include "createmonitorrequest.h"

namespace QtAws {
namespace Forecast {

class CreateMonitorResponsePrivate;

class QTAWSFORECAST_EXPORT CreateMonitorResponse : public ForecastResponse {
    Q_OBJECT

public:
    CreateMonitorResponse(const CreateMonitorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateMonitorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMonitorResponse)
    Q_DISABLE_COPY(CreateMonitorResponse)

};

} // namespace Forecast
} // namespace QtAws

#endif
