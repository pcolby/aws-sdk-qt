// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPARTNEREVENTSOURCEREQUEST_H
#define QTAWS_DESCRIBEPARTNEREVENTSOURCEREQUEST_H

#include "cloudwatcheventsrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class DescribePartnerEventSourceRequestPrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT DescribePartnerEventSourceRequest : public CloudWatchEventsRequest {

public:
    DescribePartnerEventSourceRequest(const DescribePartnerEventSourceRequest &other);
    DescribePartnerEventSourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePartnerEventSourceRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
