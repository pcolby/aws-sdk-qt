// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMETRICSTATISTICSREQUEST_H
#define QTAWS_GETMETRICSTATISTICSREQUEST_H

#include "cloudwatchrequest.h"

namespace QtAws {
namespace CloudWatch {

class GetMetricStatisticsRequestPrivate;

class QTAWSCLOUDWATCH_EXPORT GetMetricStatisticsRequest : public CloudWatchRequest {

public:
    GetMetricStatisticsRequest(const GetMetricStatisticsRequest &other);
    GetMetricStatisticsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMetricStatisticsRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
