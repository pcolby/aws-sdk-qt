// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTTARGETEDSENTIMENTDETECTIONJOBRESPONSE_H
#define QTAWS_STARTTARGETEDSENTIMENTDETECTIONJOBRESPONSE_H

#include "comprehendresponse.h"
#include "starttargetedsentimentdetectionjobrequest.h"

namespace QtAws {
namespace Comprehend {

class StartTargetedSentimentDetectionJobResponsePrivate;

class QTAWSCOMPREHEND_EXPORT StartTargetedSentimentDetectionJobResponse : public ComprehendResponse {
    Q_OBJECT

public:
    StartTargetedSentimentDetectionJobResponse(const StartTargetedSentimentDetectionJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartTargetedSentimentDetectionJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartTargetedSentimentDetectionJobResponse)
    Q_DISABLE_COPY(StartTargetedSentimentDetectionJobResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
