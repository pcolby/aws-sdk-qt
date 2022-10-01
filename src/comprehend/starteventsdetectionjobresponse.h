// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTEVENTSDETECTIONJOBRESPONSE_H
#define QTAWS_STARTEVENTSDETECTIONJOBRESPONSE_H

#include "comprehendresponse.h"
#include "starteventsdetectionjobrequest.h"

namespace QtAws {
namespace Comprehend {

class StartEventsDetectionJobResponsePrivate;

class QTAWSCOMPREHEND_EXPORT StartEventsDetectionJobResponse : public ComprehendResponse {
    Q_OBJECT

public:
    StartEventsDetectionJobResponse(const StartEventsDetectionJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartEventsDetectionJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartEventsDetectionJobResponse)
    Q_DISABLE_COPY(StartEventsDetectionJobResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
