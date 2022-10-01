// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTARGETEDSENTIMENTDETECTIONJOBSRESPONSE_H
#define QTAWS_LISTTARGETEDSENTIMENTDETECTIONJOBSRESPONSE_H

#include "comprehendresponse.h"
#include "listtargetedsentimentdetectionjobsrequest.h"

namespace QtAws {
namespace Comprehend {

class ListTargetedSentimentDetectionJobsResponsePrivate;

class QTAWSCOMPREHEND_EXPORT ListTargetedSentimentDetectionJobsResponse : public ComprehendResponse {
    Q_OBJECT

public:
    ListTargetedSentimentDetectionJobsResponse(const ListTargetedSentimentDetectionJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTargetedSentimentDetectionJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTargetedSentimentDetectionJobsResponse)
    Q_DISABLE_COPY(ListTargetedSentimentDetectionJobsResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
