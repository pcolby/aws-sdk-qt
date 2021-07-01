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

#include "modifyglobalclusterresponse.h"
#include "modifyglobalclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::ModifyGlobalClusterResponse
 * \brief The ModifyGlobalClusterResponse class provides an interace for DocDB ModifyGlobalCluster responses.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::modifyGlobalCluster
 */

/*!
 * Constructs a ModifyGlobalClusterResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyGlobalClusterResponse::ModifyGlobalClusterResponse(
        const ModifyGlobalClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDBResponse(new ModifyGlobalClusterResponsePrivate(this), parent)
{
    setRequest(new ModifyGlobalClusterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyGlobalClusterRequest * ModifyGlobalClusterResponse::request() const
{
    Q_D(const ModifyGlobalClusterResponse);
    return static_cast<const ModifyGlobalClusterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDB ModifyGlobalCluster \a response.
 */
void ModifyGlobalClusterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyGlobalClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDB::ModifyGlobalClusterResponsePrivate
 * \brief The ModifyGlobalClusterResponsePrivate class provides private implementation for ModifyGlobalClusterResponse.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a ModifyGlobalClusterResponsePrivate object with public implementation \a q.
 */
ModifyGlobalClusterResponsePrivate::ModifyGlobalClusterResponsePrivate(
    ModifyGlobalClusterResponse * const q) : DocDBResponsePrivate(q)
{

}

/*!
 * Parses a DocDB ModifyGlobalCluster response element from \a xml.
 */
void ModifyGlobalClusterResponsePrivate::parseModifyGlobalClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyGlobalClusterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDB
} // namespace QtAws
