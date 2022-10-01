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
namespace DocDb {

/*!
 * \class QtAws::DocDb::ModifyDBClusterParameterGroupResponse
 * \brief The ModifyDBClusterParameterGroupResponse class provides an interace for DocDb ModifyDBClusterParameterGroup responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::modifyDBClusterParameterGroup
 */

/*!
 * Constructs a ModifyDBClusterParameterGroupResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyDBClusterParameterGroupResponse::ModifyDBClusterParameterGroupResponse(
        const ModifyDBClusterParameterGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new ModifyDBClusterParameterGroupResponsePrivate(this), parent)
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
 * Parses a successful DocDb ModifyDBClusterParameterGroup \a response.
 */
void ModifyDBClusterParameterGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyDBClusterParameterGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::ModifyDBClusterParameterGroupResponsePrivate
 * \brief The ModifyDBClusterParameterGroupResponsePrivate class provides private implementation for ModifyDBClusterParameterGroupResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a ModifyDBClusterParameterGroupResponsePrivate object with public implementation \a q.
 */
ModifyDBClusterParameterGroupResponsePrivate::ModifyDBClusterParameterGroupResponsePrivate(
    ModifyDBClusterParameterGroupResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb ModifyDBClusterParameterGroup response element from \a xml.
 */
void ModifyDBClusterParameterGroupResponsePrivate::parseModifyDBClusterParameterGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyDBClusterParameterGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
