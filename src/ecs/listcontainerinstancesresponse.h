/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_LISTCONTAINERINSTANCESRESPONSE_H
#define QTAWS_LISTCONTAINERINSTANCESRESPONSE_H

#include "ecsresponse.h"
#include "listcontainerinstancesrequest.h"

namespace AWS {

namespace ecs {

class ListContainerInstancesResponsePrivate;

class QTAWS_EXPORT ListContainerInstancesResponse : public ListContainerInstancesResponse {
    Q_OBJECT

public:
    ListContainerInstancesResponse(const ListContainerInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListContainerInstancesRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(ListContainerInstancesResponse)
    Q_DISABLE_COPY(ListContainerInstancesResponse)

};

} // namespace ecs
} // namespace AWS

#endif
