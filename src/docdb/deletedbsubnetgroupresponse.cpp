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
namespace DocDb {

/*!
 * \class QtAws::DocDb::DeleteDBSubnetGroupResponse
 * \brief The DeleteDBSubnetGroupResponse class provides an interace for DocDb DeleteDBSubnetGroup responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::deleteDBSubnetGroup
 */

/*!
 * Constructs a DeleteDBSubnetGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDBSubnetGroupResponse::DeleteDBSubnetGroupResponse(
        const DeleteDBSubnetGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new DeleteDBSubnetGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteDBSubnetGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDBSubnetGroupRequest * DeleteDBSubnetGroupResponse::request() const
{
    Q_D(const DeleteDBSubnetGroupResponse);
    return static_cast<const DeleteDBSubnetGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb DeleteDBSubnetGroup \a response.
 */
void DeleteDBSubnetGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDBSubnetGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::DeleteDBSubnetGroupResponsePrivate
 * \brief The DeleteDBSubnetGroupResponsePrivate class provides private implementation for DeleteDBSubnetGroupResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DeleteDBSubnetGroupResponsePrivate object with public implementation \a q.
 */
DeleteDBSubnetGroupResponsePrivate::DeleteDBSubnetGroupResponsePrivate(
    DeleteDBSubnetGroupResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb DeleteDBSubnetGroup response element from \a xml.
 */
void DeleteDBSubnetGroupResponsePrivate::parseDeleteDBSubnetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDBSubnetGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
