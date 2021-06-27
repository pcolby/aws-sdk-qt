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

#include "startdbclusterresponse.h"
#include "startdbclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::StartDBClusterResponse
 * \brief The StartDBClusterResponse class provides an interace for DocDB StartDBCluster responses.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::startDBCluster
 */

/*!
 * Constructs a StartDBClusterResponse object for \a reply to \a request, with parent \a parent.
 */
StartDBClusterResponse::StartDBClusterResponse(
        const StartDBClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDBResponse(new StartDBClusterResponsePrivate(this), parent)
{
    setRequest(new StartDBClusterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartDBClusterRequest * StartDBClusterResponse::request() const
{
    return static_cast<const StartDBClusterRequest *>(DocDBResponse::request());
}

/*!
 * \reimp
 * Parses a successful DocDB StartDBCluster \a response.
 */
void StartDBClusterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartDBClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDB::StartDBClusterResponsePrivate
 * \brief The StartDBClusterResponsePrivate class provides private implementation for StartDBClusterResponse.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a StartDBClusterResponsePrivate object with public implementation \a q.
 */
StartDBClusterResponsePrivate::StartDBClusterResponsePrivate(
    StartDBClusterResponse * const q) : DocDBResponsePrivate(q)
{

}

/*!
 * Parses a DocDB StartDBCluster response element from \a xml.
 */
void StartDBClusterResponsePrivate::parseStartDBClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartDBClusterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDB
} // namespace QtAws
