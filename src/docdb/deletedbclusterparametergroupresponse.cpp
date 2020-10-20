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

#include "deletedbclusterparametergroupresponse.h"
#include "deletedbclusterparametergroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::DeleteDBClusterParameterGroupResponse
 * \brief The DeleteDBClusterParameterGroupResponse class provides an interace for DocDB DeleteDBClusterParameterGroup responses.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::deleteDBClusterParameterGroup
 */

/*!
 * Constructs a DeleteDBClusterParameterGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDBClusterParameterGroupResponse::DeleteDBClusterParameterGroupResponse(
        const DeleteDBClusterParameterGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDBResponse(new DeleteDBClusterParameterGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteDBClusterParameterGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDBClusterParameterGroupRequest * DeleteDBClusterParameterGroupResponse::request() const
{
    Q_D(const DeleteDBClusterParameterGroupResponse);
    return static_cast<const DeleteDBClusterParameterGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDB DeleteDBClusterParameterGroup \a response.
 */
void DeleteDBClusterParameterGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDBClusterParameterGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDB::DeleteDBClusterParameterGroupResponsePrivate
 * \brief The DeleteDBClusterParameterGroupResponsePrivate class provides private implementation for DeleteDBClusterParameterGroupResponse.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a DeleteDBClusterParameterGroupResponsePrivate object with public implementation \a q.
 */
DeleteDBClusterParameterGroupResponsePrivate::DeleteDBClusterParameterGroupResponsePrivate(
    DeleteDBClusterParameterGroupResponse * const q) : DocDBResponsePrivate(q)
{

}

/*!
 * Parses a DocDB DeleteDBClusterParameterGroup response element from \a xml.
 */
void DeleteDBClusterParameterGroupResponsePrivate::parseDeleteDBClusterParameterGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDBClusterParameterGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDB
} // namespace QtAws
