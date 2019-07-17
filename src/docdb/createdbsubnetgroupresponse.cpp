/*
    Copyright 2013-2019 Paul Colby

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

#include "createdbsubnetgroupresponse.h"
#include "createdbsubnetgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::CreateDBSubnetGroupResponse
 * \brief The CreateDBSubnetGroupResponse class provides an interace for DocDB CreateDBSubnetGroup responses.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::createDBSubnetGroup
 */

/*!
 * Constructs a CreateDBSubnetGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDBSubnetGroupResponse::CreateDBSubnetGroupResponse(
        const CreateDBSubnetGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDBResponse(new CreateDBSubnetGroupResponsePrivate(this), parent)
{
    setRequest(new CreateDBSubnetGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDBSubnetGroupRequest * CreateDBSubnetGroupResponse::request() const
{
    Q_D(const CreateDBSubnetGroupResponse);
    return static_cast<const CreateDBSubnetGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDB CreateDBSubnetGroup \a response.
 */
void CreateDBSubnetGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDBSubnetGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDB::CreateDBSubnetGroupResponsePrivate
 * \brief The CreateDBSubnetGroupResponsePrivate class provides private implementation for CreateDBSubnetGroupResponse.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a CreateDBSubnetGroupResponsePrivate object with public implementation \a q.
 */
CreateDBSubnetGroupResponsePrivate::CreateDBSubnetGroupResponsePrivate(
    CreateDBSubnetGroupResponse * const q) : DocDBResponsePrivate(q)
{

}

/*!
 * Parses a DocDB CreateDBSubnetGroup response element from \a xml.
 */
void CreateDBSubnetGroupResponsePrivate::parseCreateDBSubnetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDBSubnetGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDB
} // namespace QtAws
