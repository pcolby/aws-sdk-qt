// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTPIIENTITIESDETECTIONJOBRESPONSE_H
#define QTAWS_STARTPIIENTITIESDETECTIONJOBRESPONSE_H

#include "comprehendresponse.h"
#include "startpiientitiesdetectionjobrequest.h"

namespace QtAws {
namespace Comprehend {

class StartPiiEntitiesDetectionJobResponsePrivate;

class QTAWSCOMPREHEND_EXPORT StartPiiEntitiesDetectionJobResponse : public ComprehendResponse {
    Q_OBJECT

public:
    StartPiiEntitiesDetectionJobResponse(const StartPiiEntitiesDetectionJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartPiiEntitiesDetectionJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartPiiEntitiesDetectionJobResponse)
    Q_DISABLE_COPY(StartPiiEntitiesDetectionJobResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
