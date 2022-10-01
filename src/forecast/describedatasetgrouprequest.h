// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASETGROUPREQUEST_H
#define QTAWS_DESCRIBEDATASETGROUPREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class DescribeDatasetGroupRequestPrivate;

class QTAWSFORECAST_EXPORT DescribeDatasetGroupRequest : public ForecastRequest {

public:
    DescribeDatasetGroupRequest(const DescribeDatasetGroupRequest &other);
    DescribeDatasetGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDatasetGroupRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
