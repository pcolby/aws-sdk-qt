// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPPIIENTITIESDETECTIONJOBRESPONSE_H
#define QTAWS_STOPPIIENTITIESDETECTIONJOBRESPONSE_H

#include "comprehendresponse.h"
#include "stoppiientitiesdetectionjobrequest.h"

namespace QtAws {
namespace Comprehend {

class StopPiiEntitiesDetectionJobResponsePrivate;

class QTAWSCOMPREHEND_EXPORT StopPiiEntitiesDetectionJobResponse : public ComprehendResponse {
    Q_OBJECT

public:
    StopPiiEntitiesDetectionJobResponse(const StopPiiEntitiesDetectionJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopPiiEntitiesDetectionJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopPiiEntitiesDetectionJobResponse)
    Q_DISABLE_COPY(StopPiiEntitiesDetectionJobResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
