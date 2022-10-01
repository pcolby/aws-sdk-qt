// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPTARGETEDSENTIMENTDETECTIONJOBRESPONSE_H
#define QTAWS_STOPTARGETEDSENTIMENTDETECTIONJOBRESPONSE_H

#include "comprehendresponse.h"
#include "stoptargetedsentimentdetectionjobrequest.h"

namespace QtAws {
namespace Comprehend {

class StopTargetedSentimentDetectionJobResponsePrivate;

class QTAWSCOMPREHEND_EXPORT StopTargetedSentimentDetectionJobResponse : public ComprehendResponse {
    Q_OBJECT

public:
    StopTargetedSentimentDetectionJobResponse(const StopTargetedSentimentDetectionJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopTargetedSentimentDetectionJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopTargetedSentimentDetectionJobResponse)
    Q_DISABLE_COPY(StopTargetedSentimentDetectionJobResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
