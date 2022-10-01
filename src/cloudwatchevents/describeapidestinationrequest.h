// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPIDESTINATIONREQUEST_H
#define QTAWS_DESCRIBEAPIDESTINATIONREQUEST_H

#include "cloudwatcheventsrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class DescribeApiDestinationRequestPrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT DescribeApiDestinationRequest : public CloudWatchEventsRequest {

public:
    DescribeApiDestinationRequest(const DescribeApiDestinationRequest &other);
    DescribeApiDestinationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeApiDestinationRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
