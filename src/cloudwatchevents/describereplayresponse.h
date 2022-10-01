// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLAYRESPONSE_H
#define QTAWS_DESCRIBEREPLAYRESPONSE_H

#include "cloudwatcheventsresponse.h"
#include "describereplayrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class DescribeReplayResponsePrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT DescribeReplayResponse : public CloudWatchEventsResponse {
    Q_OBJECT

public:
    DescribeReplayResponse(const DescribeReplayRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeReplayRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReplayResponse)
    Q_DISABLE_COPY(DescribeReplayResponse)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
