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

#include "modifydbclusterparametergroupresponse.h"
#include "modifydbclusterparametergroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::ModifyDBClusterParameterGroupResponse
 * \brief The ModifyDBClusterParameterGroupResponse class provides an interace for DocDB ModifyDBClusterParameterGroup responses.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::modifyDBClusterParameterGroup
 */

/*!
 * Constructs a ModifyDBClusterParameterGroupResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyDBClusterParameterGroupResponse::ModifyDBClusterParameterGroupResponse(
        const ModifyDBClusterParameterGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDBResponse(new ModifyDBClusterParameterGroupResponsePrivate(this), parent)
{
    setRequest(new ModifyDBClusterParameterGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyDBClusterParameterGroupRequest * ModifyDBClusterParameterGroupResponse::request() const
{
    Q_D(const ModifyDBClusterParameterGroupResponse);
    return static_cast<const ModifyDBClusterParameterGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDB ModifyDBClusterParameterGroup \a response.
 */
void ModifyDBClusterParameterGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyDBClusterParameterGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDB::ModifyDBClusterParameterGroupResponsePrivate
 * \brief The ModifyDBClusterParameterGroupResponsePrivate class provides private implementation for ModifyDBClusterParameterGroupResponse.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a ModifyDBClusterParameterGroupResponsePrivate object with public implementation \a q.
 */
ModifyDBClusterParameterGroupResponsePrivate::ModifyDBClusterParameterGroupResponsePrivate(
    ModifyDBClusterParameterGroupResponse * const q) : DocDBResponsePrivate(q)
{

}

/*!
 * Parses a DocDB ModifyDBClusterParameterGroup response element from \a xml.
 */
void ModifyDBClusterParameterGroupResponsePrivate::parseModifyDBClusterParameterGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyDBClusterParameterGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDB
} // namespace QtAws
