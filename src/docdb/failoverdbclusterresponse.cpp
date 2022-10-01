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
namespace DocDb {

/*!
 * \class QtAws::DocDb::FailoverDBClusterResponse
 * \brief The FailoverDBClusterResponse class provides an interace for DocDb FailoverDBCluster responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::failoverDBCluster
 */

/*!
 * Constructs a FailoverDBClusterResponse object for \a reply to \a request, with parent \a parent.
 */
FailoverDBClusterResponse::FailoverDBClusterResponse(
        const FailoverDBClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new FailoverDBClusterResponsePrivate(this), parent)
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
 * Parses a successful DocDb FailoverDBCluster \a response.
 */
void FailoverDBClusterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(FailoverDBClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::FailoverDBClusterResponsePrivate
 * \brief The FailoverDBClusterResponsePrivate class provides private implementation for FailoverDBClusterResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a FailoverDBClusterResponsePrivate object with public implementation \a q.
 */
FailoverDBClusterResponsePrivate::FailoverDBClusterResponsePrivate(
    FailoverDBClusterResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb FailoverDBCluster response element from \a xml.
 */
void FailoverDBClusterResponsePrivate::parseFailoverDBClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("FailoverDBClusterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
