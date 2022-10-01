// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUTOPREDICTORREQUEST_H
#define QTAWS_DESCRIBEAUTOPREDICTORREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class DescribeAutoPredictorRequestPrivate;

class QTAWSFORECAST_EXPORT DescribeAutoPredictorRequest : public ForecastRequest {

public:
    DescribeAutoPredictorRequest(const DescribeAutoPredictorRequest &other);
    DescribeAutoPredictorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAutoPredictorRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
