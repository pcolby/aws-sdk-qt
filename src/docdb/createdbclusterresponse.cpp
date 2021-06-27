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

#include "createdbclusterresponse.h"
#include "createdbclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::CreateDBClusterResponse
 * \brief The CreateDBClusterResponse class provides an interace for DocDB CreateDBCluster responses.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::createDBCluster
 */

/*!
 * Constructs a CreateDBClusterResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDBClusterResponse::CreateDBClusterResponse(
        const CreateDBClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDBResponse(new CreateDBClusterResponsePrivate(this), parent)
{
    setRequest(new CreateDBClusterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDBClusterRequest * CreateDBClusterResponse::request() const
{
    return static_cast<const CreateDBClusterRequest *>(DocDBResponse::request());
}

/*!
 * \reimp
 * Parses a successful DocDB CreateDBCluster \a response.
 */
void CreateDBClusterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDBClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDB::CreateDBClusterResponsePrivate
 * \brief The CreateDBClusterResponsePrivate class provides private implementation for CreateDBClusterResponse.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a CreateDBClusterResponsePrivate object with public implementation \a q.
 */
CreateDBClusterResponsePrivate::CreateDBClusterResponsePrivate(
    CreateDBClusterResponse * const q) : DocDBResponsePrivate(q)
{

}

/*!
 * Parses a DocDB CreateDBCluster response element from \a xml.
 */
void CreateDBClusterResponsePrivate::parseCreateDBClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDBClusterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDB
} // namespace QtAws
