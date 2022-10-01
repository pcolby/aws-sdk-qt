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
namespace DocDb {

/*!
 * \class QtAws::DocDb::StartDBClusterResponse
 * \brief The StartDBClusterResponse class provides an interace for DocDb StartDBCluster responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::startDBCluster
 */

/*!
 * Constructs a StartDBClusterResponse object for \a reply to \a request, with parent \a parent.
 */
StartDBClusterResponse::StartDBClusterResponse(
        const StartDBClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new StartDBClusterResponsePrivate(this), parent)
{
    setRequest(new StartDBClusterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartDBClusterRequest * StartDBClusterResponse::request() const
{
    Q_D(const StartDBClusterResponse);
    return static_cast<const StartDBClusterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb StartDBCluster \a response.
 */
void StartDBClusterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartDBClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::StartDBClusterResponsePrivate
 * \brief The StartDBClusterResponsePrivate class provides private implementation for StartDBClusterResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a StartDBClusterResponsePrivate object with public implementation \a q.
 */
StartDBClusterResponsePrivate::StartDBClusterResponsePrivate(
    StartDBClusterResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb StartDBCluster response element from \a xml.
 */
void StartDBClusterResponsePrivate::parseStartDBClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartDBClusterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
