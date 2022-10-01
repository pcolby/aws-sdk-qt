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
namespace DocDb {

/*!
 * \class QtAws::DocDb::DeleteGlobalClusterResponse
 * \brief The DeleteGlobalClusterResponse class provides an interace for DocDb DeleteGlobalCluster responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::deleteGlobalCluster
 */

/*!
 * Constructs a DeleteGlobalClusterResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteGlobalClusterResponse::DeleteGlobalClusterResponse(
        const DeleteGlobalClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new DeleteGlobalClusterResponsePrivate(this), parent)
{
    setRequest(new DeleteGlobalClusterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteGlobalClusterRequest * DeleteGlobalClusterResponse::request() const
{
    Q_D(const DeleteGlobalClusterResponse);
    return static_cast<const DeleteGlobalClusterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb DeleteGlobalCluster \a response.
 */
void DeleteGlobalClusterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteGlobalClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::DeleteGlobalClusterResponsePrivate
 * \brief The DeleteGlobalClusterResponsePrivate class provides private implementation for DeleteGlobalClusterResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DeleteGlobalClusterResponsePrivate object with public implementation \a q.
 */
DeleteGlobalClusterResponsePrivate::DeleteGlobalClusterResponsePrivate(
    DeleteGlobalClusterResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb DeleteGlobalCluster response element from \a xml.
 */
void DeleteGlobalClusterResponsePrivate::parseDeleteGlobalClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteGlobalClusterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
