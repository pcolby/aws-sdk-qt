// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTSOURCEREQUEST_H
#define QTAWS_DESCRIBEEVENTSOURCEREQUEST_H

#include "cloudwatcheventsrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class DescribeEventSourceRequestPrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT DescribeEventSourceRequest : public CloudWatchEventsRequest {

public:
    DescribeEventSourceRequest(const DescribeEventSourceRequest &other);
    DescribeEventSourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEventSourceRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
