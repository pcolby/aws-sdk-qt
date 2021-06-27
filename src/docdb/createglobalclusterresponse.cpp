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

#include "createglobalclusterresponse.h"
#include "createglobalclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::CreateGlobalClusterResponse
 * \brief The CreateGlobalClusterResponse class provides an interace for DocDB CreateGlobalCluster responses.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::createGlobalCluster
 */

/*!
 * Constructs a CreateGlobalClusterResponse object for \a reply to \a request, with parent \a parent.
 */
CreateGlobalClusterResponse::CreateGlobalClusterResponse(
        const CreateGlobalClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDBResponse(new CreateGlobalClusterResponsePrivate(this), parent)
{
    setRequest(new CreateGlobalClusterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateGlobalClusterRequest * CreateGlobalClusterResponse::request() const
{
    return static_cast<const CreateGlobalClusterRequest *>(DocDBResponse::request());
}

/*!
 * \reimp
 * Parses a successful DocDB CreateGlobalCluster \a response.
 */
void CreateGlobalClusterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateGlobalClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDB::CreateGlobalClusterResponsePrivate
 * \brief The CreateGlobalClusterResponsePrivate class provides private implementation for CreateGlobalClusterResponse.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a CreateGlobalClusterResponsePrivate object with public implementation \a q.
 */
CreateGlobalClusterResponsePrivate::CreateGlobalClusterResponsePrivate(
    CreateGlobalClusterResponse * const q) : DocDBResponsePrivate(q)
{

}

/*!
 * Parses a DocDB CreateGlobalCluster response element from \a xml.
 */
void CreateGlobalClusterResponsePrivate::parseCreateGlobalClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateGlobalClusterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDB
} // namespace QtAws
