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
namespace DocDb {

/*!
 * \class QtAws::DocDb::ModifyDBClusterResponse
 * \brief The ModifyDBClusterResponse class provides an interace for DocDb ModifyDBCluster responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::modifyDBCluster
 */

/*!
 * Constructs a ModifyDBClusterResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyDBClusterResponse::ModifyDBClusterResponse(
        const ModifyDBClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new ModifyDBClusterResponsePrivate(this), parent)
{
    setRequest(new ModifyDBClusterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyDBClusterRequest * ModifyDBClusterResponse::request() const
{
    Q_D(const ModifyDBClusterResponse);
    return static_cast<const ModifyDBClusterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb ModifyDBCluster \a response.
 */
void ModifyDBClusterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyDBClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::ModifyDBClusterResponsePrivate
 * \brief The ModifyDBClusterResponsePrivate class provides private implementation for ModifyDBClusterResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a ModifyDBClusterResponsePrivate object with public implementation \a q.
 */
ModifyDBClusterResponsePrivate::ModifyDBClusterResponsePrivate(
    ModifyDBClusterResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb ModifyDBCluster response element from \a xml.
 */
void ModifyDBClusterResponsePrivate::parseModifyDBClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyDBClusterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
