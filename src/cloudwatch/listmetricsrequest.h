// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMETRICSREQUEST_H
#define QTAWS_LISTMETRICSREQUEST_H

#include "cloudwatchrequest.h"

namespace QtAws {
namespace CloudWatch {

class ListMetricsRequestPrivate;

class QTAWSCLOUDWATCH_EXPORT ListMetricsRequest : public CloudWatchRequest {

public:
    ListMetricsRequest(const ListMetricsRequest &other);
    ListMetricsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMetricsRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
