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

#include "stopdbclusterresponse.h"
#include "stopdbclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::StopDBClusterResponse
 * \brief The StopDBClusterResponse class provides an interace for DocDb StopDBCluster responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::stopDBCluster
 */

/*!
 * Constructs a StopDBClusterResponse object for \a reply to \a request, with parent \a parent.
 */
StopDBClusterResponse::StopDBClusterResponse(
        const StopDBClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new StopDBClusterResponsePrivate(this), parent)
{
    setRequest(new StopDBClusterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopDBClusterRequest * StopDBClusterResponse::request() const
{
    Q_D(const StopDBClusterResponse);
    return static_cast<const StopDBClusterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb StopDBCluster \a response.
 */
void StopDBClusterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopDBClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::StopDBClusterResponsePrivate
 * \brief The StopDBClusterResponsePrivate class provides private implementation for StopDBClusterResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a StopDBClusterResponsePrivate object with public implementation \a q.
 */
StopDBClusterResponsePrivate::StopDBClusterResponsePrivate(
    StopDBClusterResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb StopDBCluster response element from \a xml.
 */
void StopDBClusterResponsePrivate::parseStopDBClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopDBClusterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
