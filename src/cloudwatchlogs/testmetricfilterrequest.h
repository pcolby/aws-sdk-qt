// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTMETRICFILTERREQUEST_H
#define QTAWS_TESTMETRICFILTERREQUEST_H

#include "cloudwatchlogsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class TestMetricFilterRequestPrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT TestMetricFilterRequest : public CloudWatchLogsRequest {

public:
    TestMetricFilterRequest(const TestMetricFilterRequest &other);
    TestMetricFilterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TestMetricFilterRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
