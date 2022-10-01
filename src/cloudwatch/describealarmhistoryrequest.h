// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEALARMHISTORYREQUEST_H
#define QTAWS_DESCRIBEALARMHISTORYREQUEST_H

#include "cloudwatchrequest.h"

namespace QtAws {
namespace CloudWatch {

class DescribeAlarmHistoryRequestPrivate;

class QTAWSCLOUDWATCH_EXPORT DescribeAlarmHistoryRequest : public CloudWatchRequest {

public:
    DescribeAlarmHistoryRequest(const DescribeAlarmHistoryRequest &other);
    DescribeAlarmHistoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAlarmHistoryRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
