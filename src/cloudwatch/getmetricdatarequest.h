// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMETRICDATAREQUEST_H
#define QTAWS_GETMETRICDATAREQUEST_H

#include "cloudwatchrequest.h"

namespace QtAws {
namespace CloudWatch {

class GetMetricDataRequestPrivate;

class QTAWSCLOUDWATCH_EXPORT GetMetricDataRequest : public CloudWatchRequest {

public:
    GetMetricDataRequest(const GetMetricDataRequest &other);
    GetMetricDataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMetricDataRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
