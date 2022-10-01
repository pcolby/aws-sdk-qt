// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPARTNEREVENTSOURCERESPONSE_H
#define QTAWS_DESCRIBEPARTNEREVENTSOURCERESPONSE_H

#include "cloudwatcheventsresponse.h"
#include "describepartnereventsourcerequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class DescribePartnerEventSourceResponsePrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT DescribePartnerEventSourceResponse : public CloudWatchEventsResponse {
    Q_OBJECT

public:
    DescribePartnerEventSourceResponse(const DescribePartnerEventSourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribePartnerEventSourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePartnerEventSourceResponse)
    Q_DISABLE_COPY(DescribePartnerEventSourceResponse)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
