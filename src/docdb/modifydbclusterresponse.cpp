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

#include "modifydbclusterresponse.h"
#include "modifydbclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::ModifyDBClusterResponse
 * \brief The ModifyDBClusterResponse class provides an interace for DocDB ModifyDBCluster responses.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::modifyDBCluster
 */

/*!
 * Constructs a ModifyDBClusterResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyDBClusterResponse::ModifyDBClusterResponse(
        const ModifyDBClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDBResponse(new ModifyDBClusterResponsePrivate(this), parent)
{
    setRequest(new ModifyDBClusterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyDBClusterRequest * ModifyDBClusterResponse::request() const
{
    return static_cast<const ModifyDBClusterRequest *>(DocDBResponse::request());
}

/*!
 * \reimp
 * Parses a successful DocDB ModifyDBCluster \a response.
 */
void ModifyDBClusterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyDBClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDB::ModifyDBClusterResponsePrivate
 * \brief The ModifyDBClusterResponsePrivate class provides private implementation for ModifyDBClusterResponse.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a ModifyDBClusterResponsePrivate object with public implementation \a q.
 */
ModifyDBClusterResponsePrivate::ModifyDBClusterResponsePrivate(
    ModifyDBClusterResponse * const q) : DocDBResponsePrivate(q)
{

}

/*!
 * Parses a DocDB ModifyDBCluster response element from \a xml.
 */
void ModifyDBClusterResponsePrivate::parseModifyDBClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyDBClusterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDB
} // namespace QtAws
