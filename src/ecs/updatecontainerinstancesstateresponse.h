/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_UPDATECONTAINERINSTANCESSTATERESPONSE_H
#define QTAWS_UPDATECONTAINERINSTANCESSTATERESPONSE_H

#include "ecsresponse.h"
#include "updatecontainerinstancesstaterequest.h"

namespace QtAws {
namespace ECS {

class UpdateContainerInstancesStateResponsePrivate;

class QTAWS_EXPORT UpdateContainerInstancesStateResponse : public ECSResponse {
    Q_OBJECT

public:
    UpdateContainerInstancesStateResponse(const UpdateContainerInstancesStateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateContainerInstancesStateRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(UpdateContainerInstancesStateResponse)
    Q_DISABLE_COPY(UpdateContainerInstancesStateResponse)

};

} // namespace ECS
} // namespace QtAws

#endif
