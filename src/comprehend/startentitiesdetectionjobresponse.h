// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTENTITIESDETECTIONJOBRESPONSE_H
#define QTAWS_STARTENTITIESDETECTIONJOBRESPONSE_H

#include "comprehendresponse.h"
#include "startentitiesdetectionjobrequest.h"

namespace QtAws {
namespace Comprehend {

class StartEntitiesDetectionJobResponsePrivate;

class QTAWSCOMPREHEND_EXPORT StartEntitiesDetectionJobResponse : public ComprehendResponse {
    Q_OBJECT

public:
    StartEntitiesDetectionJobResponse(const StartEntitiesDetectionJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartEntitiesDetectionJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartEntitiesDetectionJobResponse)
    Q_DISABLE_COPY(StartEntitiesDetectionJobResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
