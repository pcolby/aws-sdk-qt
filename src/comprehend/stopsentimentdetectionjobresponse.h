// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPSENTIMENTDETECTIONJOBRESPONSE_H
#define QTAWS_STOPSENTIMENTDETECTIONJOBRESPONSE_H

#include "comprehendresponse.h"
#include "stopsentimentdetectionjobrequest.h"

namespace QtAws {
namespace Comprehend {

class StopSentimentDetectionJobResponsePrivate;

class QTAWSCOMPREHEND_EXPORT StopSentimentDetectionJobResponse : public ComprehendResponse {
    Q_OBJECT

public:
    StopSentimentDetectionJobResponse(const StopSentimentDetectionJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopSentimentDetectionJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopSentimentDetectionJobResponse)
    Q_DISABLE_COPY(StopSentimentDetectionJobResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
