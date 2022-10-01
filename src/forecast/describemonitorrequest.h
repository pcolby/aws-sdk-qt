// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMONITORREQUEST_H
#define QTAWS_DESCRIBEMONITORREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class DescribeMonitorRequestPrivate;

class QTAWSFORECAST_EXPORT DescribeMonitorRequest : public ForecastRequest {

public:
    DescribeMonitorRequest(const DescribeMonitorRequest &other);
    DescribeMonitorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMonitorRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
