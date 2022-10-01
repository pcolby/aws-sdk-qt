// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEXPLAINABILITYREQUEST_H
#define QTAWS_DESCRIBEEXPLAINABILITYREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class DescribeExplainabilityRequestPrivate;

class QTAWSFORECAST_EXPORT DescribeExplainabilityRequest : public ForecastRequest {

public:
    DescribeExplainabilityRequest(const DescribeExplainabilityRequest &other);
    DescribeExplainabilityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeExplainabilityRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
