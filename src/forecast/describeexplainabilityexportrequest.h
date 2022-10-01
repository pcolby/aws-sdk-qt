// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEXPLAINABILITYEXPORTREQUEST_H
#define QTAWS_DESCRIBEEXPLAINABILITYEXPORTREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class DescribeExplainabilityExportRequestPrivate;

class QTAWSFORECAST_EXPORT DescribeExplainabilityExportRequest : public ForecastRequest {

public:
    DescribeExplainabilityExportRequest(const DescribeExplainabilityExportRequest &other);
    DescribeExplainabilityExportRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeExplainabilityExportRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
