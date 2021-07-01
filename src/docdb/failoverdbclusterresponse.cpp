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

#include "failoverdbclusterresponse.h"
#include "failoverdbclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::FailoverDBClusterResponse
 * \brief The FailoverDBClusterResponse class provides an interace for DocDB FailoverDBCluster responses.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::failoverDBCluster
 */

/*!
 * Constructs a FailoverDBClusterResponse object for \a reply to \a request, with parent \a parent.
 */
FailoverDBClusterResponse::FailoverDBClusterResponse(
        const FailoverDBClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDBResponse(new FailoverDBClusterResponsePrivate(this), parent)
{
    setRequest(new FailoverDBClusterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const FailoverDBClusterRequest * FailoverDBClusterResponse::request() const
{
    Q_D(const FailoverDBClusterResponse);
    return static_cast<const FailoverDBClusterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDB FailoverDBCluster \a response.
 */
void FailoverDBClusterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(FailoverDBClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDB::FailoverDBClusterResponsePrivate
 * \brief The FailoverDBClusterResponsePrivate class provides private implementation for FailoverDBClusterResponse.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a FailoverDBClusterResponsePrivate object with public implementation \a q.
 */
FailoverDBClusterResponsePrivate::FailoverDBClusterResponsePrivate(
    FailoverDBClusterResponse * const q) : DocDBResponsePrivate(q)
{

}

/*!
 * Parses a DocDB FailoverDBCluster response element from \a xml.
 */
void FailoverDBClusterResponsePrivate::parseFailoverDBClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("FailoverDBClusterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDB
} // namespace QtAws
