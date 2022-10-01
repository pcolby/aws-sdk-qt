// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPENTITIESDETECTIONJOBRESPONSE_H
#define QTAWS_STOPENTITIESDETECTIONJOBRESPONSE_H

#include "comprehendresponse.h"
#include "stopentitiesdetectionjobrequest.h"

namespace QtAws {
namespace Comprehend {

class StopEntitiesDetectionJobResponsePrivate;

class QTAWSCOMPREHEND_EXPORT StopEntitiesDetectionJobResponse : public ComprehendResponse {
    Q_OBJECT

public:
    StopEntitiesDetectionJobResponse(const StopEntitiesDetectionJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopEntitiesDetectionJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopEntitiesDetectionJobResponse)
    Q_DISABLE_COPY(StopEntitiesDetectionJobResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
