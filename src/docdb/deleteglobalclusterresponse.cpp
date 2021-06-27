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

#include "deleteglobalclusterresponse.h"
#include "deleteglobalclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::DeleteGlobalClusterResponse
 * \brief The DeleteGlobalClusterResponse class provides an interace for DocDB DeleteGlobalCluster responses.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::deleteGlobalCluster
 */

/*!
 * Constructs a DeleteGlobalClusterResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteGlobalClusterResponse::DeleteGlobalClusterResponse(
        const DeleteGlobalClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDBResponse(new DeleteGlobalClusterResponsePrivate(this), parent)
{
    setRequest(new DeleteGlobalClusterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteGlobalClusterRequest * DeleteGlobalClusterResponse::request() const
{
    return static_cast<const DeleteGlobalClusterRequest *>(DocDBResponse::request());
}

/*!
 * \reimp
 * Parses a successful DocDB DeleteGlobalCluster \a response.
 */
void DeleteGlobalClusterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteGlobalClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDB::DeleteGlobalClusterResponsePrivate
 * \brief The DeleteGlobalClusterResponsePrivate class provides private implementation for DeleteGlobalClusterResponse.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a DeleteGlobalClusterResponsePrivate object with public implementation \a q.
 */
DeleteGlobalClusterResponsePrivate::DeleteGlobalClusterResponsePrivate(
    DeleteGlobalClusterResponse * const q) : DocDBResponsePrivate(q)
{

}

/*!
 * Parses a DocDB DeleteGlobalCluster response element from \a xml.
 */
void DeleteGlobalClusterResponsePrivate::parseDeleteGlobalClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteGlobalClusterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDB
} // namespace QtAws
