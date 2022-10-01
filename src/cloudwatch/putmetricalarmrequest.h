// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMETRICALARMREQUEST_H
#define QTAWS_PUTMETRICALARMREQUEST_H

#include "cloudwatchrequest.h"

namespace QtAws {
namespace CloudWatch {

class PutMetricAlarmRequestPrivate;

class QTAWSCLOUDWATCH_EXPORT PutMetricAlarmRequest : public CloudWatchRequest {

public:
    PutMetricAlarmRequest(const PutMetricAlarmRequest &other);
    PutMetricAlarmRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutMetricAlarmRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
