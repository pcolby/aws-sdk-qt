// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMONITORRESPONSE_H
#define QTAWS_DESCRIBEMONITORRESPONSE_H

#include "forecastresponse.h"
#include "describemonitorrequest.h"

namespace QtAws {
namespace Forecast {

class DescribeMonitorResponsePrivate;

class QTAWSFORECAST_EXPORT DescribeMonitorResponse : public ForecastResponse {
    Q_OBJECT

public:
    DescribeMonitorResponse(const DescribeMonitorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeMonitorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMonitorResponse)
    Q_DISABLE_COPY(DescribeMonitorResponse)

};

} // namespace Forecast
} // namespace QtAws

#endif
