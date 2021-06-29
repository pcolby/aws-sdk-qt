/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
