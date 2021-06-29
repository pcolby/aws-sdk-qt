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

#ifndef QTAWS_LISTGROUPSRESPONSE_H
#define QTAWS_LISTGROUPSRESPONSE_H

#include "greengrassresponse.h"
#include "listgroupsrequest.h"

namespace QtAws {
namespace Greengrass {

class ListGroupsResponsePrivate;

class QTAWSGREENGRASS_EXPORT ListGroupsResponse : public GreengrassResponse {
    Q_OBJECT

public:
    ListGroupsResponse(const ListGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGroupsResponse)
    Q_DISABLE_COPY(ListGroupsResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
