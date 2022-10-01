// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETARGETEDSENTIMENTDETECTIONJOBRESPONSE_H
#define QTAWS_DESCRIBETARGETEDSENTIMENTDETECTIONJOBRESPONSE_H

#include "comprehendresponse.h"
#include "describetargetedsentimentdetectionjobrequest.h"

namespace QtAws {
namespace Comprehend {

class DescribeTargetedSentimentDetectionJobResponsePrivate;

class QTAWSCOMPREHEND_EXPORT DescribeTargetedSentimentDetectionJobResponse : public ComprehendResponse {
    Q_OBJECT

public:
    DescribeTargetedSentimentDetectionJobResponse(const DescribeTargetedSentimentDetectionJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTargetedSentimentDetectionJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTargetedSentimentDetectionJobResponse)
    Q_DISABLE_COPY(DescribeTargetedSentimentDetectionJobResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
