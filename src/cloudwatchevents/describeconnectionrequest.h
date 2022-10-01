// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONNECTIONREQUEST_H
#define QTAWS_DESCRIBECONNECTIONREQUEST_H

#include "cloudwatcheventsrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class DescribeConnectionRequestPrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT DescribeConnectionRequest : public CloudWatchEventsRequest {

public:
    DescribeConnectionRequest(const DescribeConnectionRequest &other);
    DescribeConnectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConnectionRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
