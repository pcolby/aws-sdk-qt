// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEXPLAINABILITYEXPORTRESPONSE_H
#define QTAWS_DESCRIBEEXPLAINABILITYEXPORTRESPONSE_H

#include "forecastresponse.h"
#include "describeexplainabilityexportrequest.h"

namespace QtAws {
namespace Forecast {

class DescribeExplainabilityExportResponsePrivate;

class QTAWSFORECAST_EXPORT DescribeExplainabilityExportResponse : public ForecastResponse {
    Q_OBJECT

public:
    DescribeExplainabilityExportResponse(const DescribeExplainabilityExportRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeExplainabilityExportRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeExplainabilityExportResponse)
    Q_DISABLE_COPY(DescribeExplainabilityExportResponse)

};

} // namespace Forecast
} // namespace QtAws

#endif
