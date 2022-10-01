// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTBUSREQUEST_H
#define QTAWS_DESCRIBEEVENTBUSREQUEST_H

#include "cloudwatcheventsrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class DescribeEventBusRequestPrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT DescribeEventBusRequest : public CloudWatchEventsRequest {

public:
    DescribeEventBusRequest(const DescribeEventBusRequest &other);
    DescribeEventBusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEventBusRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
