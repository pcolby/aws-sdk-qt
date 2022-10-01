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

#include "createdbclusterparametergroupresponse.h"
#include "createdbclusterparametergroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::CreateDBClusterParameterGroupResponse
 * \brief The CreateDBClusterParameterGroupResponse class provides an interace for DocDb CreateDBClusterParameterGroup responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::createDBClusterParameterGroup
 */

/*!
 * Constructs a CreateDBClusterParameterGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDBClusterParameterGroupResponse::CreateDBClusterParameterGroupResponse(
        const CreateDBClusterParameterGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new CreateDBClusterParameterGroupResponsePrivate(this), parent)
{
    setRequest(new CreateDBClusterParameterGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDBClusterParameterGroupRequest * CreateDBClusterParameterGroupResponse::request() const
{
    Q_D(const CreateDBClusterParameterGroupResponse);
    return static_cast<const CreateDBClusterParameterGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb CreateDBClusterParameterGroup \a response.
 */
void CreateDBClusterParameterGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDBClusterParameterGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::CreateDBClusterParameterGroupResponsePrivate
 * \brief The CreateDBClusterParameterGroupResponsePrivate class provides private implementation for CreateDBClusterParameterGroupResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a CreateDBClusterParameterGroupResponsePrivate object with public implementation \a q.
 */
CreateDBClusterParameterGroupResponsePrivate::CreateDBClusterParameterGroupResponsePrivate(
    CreateDBClusterParameterGroupResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb CreateDBClusterParameterGroup response element from \a xml.
 */
void CreateDBClusterParameterGroupResponsePrivate::parseCreateDBClusterParameterGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDBClusterParameterGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
