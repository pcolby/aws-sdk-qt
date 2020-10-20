/*
    Copyright 2013-2020 Paul Colby

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

#include "resetdbclusterparametergroupresponse.h"
#include "resetdbclusterparametergroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::ResetDBClusterParameterGroupResponse
 * \brief The ResetDBClusterParameterGroupResponse class provides an interace for DocDB ResetDBClusterParameterGroup responses.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::resetDBClusterParameterGroup
 */

/*!
 * Constructs a ResetDBClusterParameterGroupResponse object for \a reply to \a request, with parent \a parent.
 */
ResetDBClusterParameterGroupResponse::ResetDBClusterParameterGroupResponse(
        const ResetDBClusterParameterGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDBResponse(new ResetDBClusterParameterGroupResponsePrivate(this), parent)
{
    setRequest(new ResetDBClusterParameterGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ResetDBClusterParameterGroupRequest * ResetDBClusterParameterGroupResponse::request() const
{
    Q_D(const ResetDBClusterParameterGroupResponse);
    return static_cast<const ResetDBClusterParameterGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDB ResetDBClusterParameterGroup \a response.
 */
void ResetDBClusterParameterGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ResetDBClusterParameterGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDB::ResetDBClusterParameterGroupResponsePrivate
 * \brief The ResetDBClusterParameterGroupResponsePrivate class provides private implementation for ResetDBClusterParameterGroupResponse.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a ResetDBClusterParameterGroupResponsePrivate object with public implementation \a q.
 */
ResetDBClusterParameterGroupResponsePrivate::ResetDBClusterParameterGroupResponsePrivate(
    ResetDBClusterParameterGroupResponse * const q) : DocDBResponsePrivate(q)
{

}

/*!
 * Parses a DocDB ResetDBClusterParameterGroup response element from \a xml.
 */
void ResetDBClusterParameterGroupResponsePrivate::parseResetDBClusterParameterGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResetDBClusterParameterGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDB
} // namespace QtAws
