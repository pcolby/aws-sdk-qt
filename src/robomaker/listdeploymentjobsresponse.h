/*
    Copyright 2013-2020 Paul Colby

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

#ifndef QTAWS_LISTDEPLOYMENTJOBSRESPONSE_H
#define QTAWS_LISTDEPLOYMENTJOBSRESPONSE_H

#include "robomakerresponse.h"
#include "listdeploymentjobsrequest.h"

namespace QtAws {
namespace RoboMaker {

class ListDeploymentJobsResponsePrivate;

class QTAWS_EXPORT ListDeploymentJobsResponse : public RoboMakerResponse {
    Q_OBJECT

public:
    ListDeploymentJobsResponse(const ListDeploymentJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDeploymentJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDeploymentJobsResponse)
    Q_DISABLE_COPY(ListDeploymentJobsResponse)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
