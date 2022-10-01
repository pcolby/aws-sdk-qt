// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPEVENTSDETECTIONJOBRESPONSE_H
#define QTAWS_STOPEVENTSDETECTIONJOBRESPONSE_H

#include "comprehendresponse.h"
#include "stopeventsdetectionjobrequest.h"

namespace QtAws {
namespace Comprehend {

class StopEventsDetectionJobResponsePrivate;

class QTAWSCOMPREHEND_EXPORT StopEventsDetectionJobResponse : public ComprehendResponse {
    Q_OBJECT

public:
    StopEventsDetectionJobResponse(const StopEventsDetectionJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopEventsDetectionJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopEventsDetectionJobResponse)
    Q_DISABLE_COPY(StopEventsDetectionJobResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
