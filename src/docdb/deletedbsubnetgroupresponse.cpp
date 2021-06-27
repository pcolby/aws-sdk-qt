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

#include "deletedbsubnetgroupresponse.h"
#include "deletedbsubnetgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::DeleteDBSubnetGroupResponse
 * \brief The DeleteDBSubnetGroupResponse class provides an interace for DocDB DeleteDBSubnetGroup responses.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::deleteDBSubnetGroup
 */

/*!
 * Constructs a DeleteDBSubnetGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDBSubnetGroupResponse::DeleteDBSubnetGroupResponse(
        const DeleteDBSubnetGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDBResponse(new DeleteDBSubnetGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteDBSubnetGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDBSubnetGroupRequest * DeleteDBSubnetGroupResponse::request() const
{
    return static_cast<const DeleteDBSubnetGroupRequest *>(DocDBResponse::request());
}

/*!
 * \reimp
 * Parses a successful DocDB DeleteDBSubnetGroup \a response.
 */
void DeleteDBSubnetGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDBSubnetGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDB::DeleteDBSubnetGroupResponsePrivate
 * \brief The DeleteDBSubnetGroupResponsePrivate class provides private implementation for DeleteDBSubnetGroupResponse.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a DeleteDBSubnetGroupResponsePrivate object with public implementation \a q.
 */
DeleteDBSubnetGroupResponsePrivate::DeleteDBSubnetGroupResponsePrivate(
    DeleteDBSubnetGroupResponse * const q) : DocDBResponsePrivate(q)
{

}

/*!
 * Parses a DocDB DeleteDBSubnetGroup response element from \a xml.
 */
void DeleteDBSubnetGroupResponsePrivate::parseDeleteDBSubnetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDBSubnetGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDB
} // namespace QtAws
