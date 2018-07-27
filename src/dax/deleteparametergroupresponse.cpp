/*
    Copyright 2013-2018 Paul Colby

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

#include "deleteparametergroupresponse.h"
#include "deleteparametergroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DAX {

/*!
 * \class QtAws::DAX::DeleteParameterGroupResponse
 * \brief The DeleteParameterGroupResponse class provides an interace for DAX DeleteParameterGroup responses.
 *
 * \inmodule QtAwsDAX
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DaxClient::deleteParameterGroup
 */

/*!
 * Constructs a DeleteParameterGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteParameterGroupResponse::DeleteParameterGroupResponse(
        const DeleteParameterGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DaxResponse(new DeleteParameterGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteParameterGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteParameterGroupRequest * DeleteParameterGroupResponse::request() const
{
    Q_D(const DeleteParameterGroupResponse);
    return static_cast<const DeleteParameterGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DAX DeleteParameterGroup \a response.
 */
void DeleteParameterGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteParameterGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DAX::DeleteParameterGroupResponsePrivate
 * \brief The DeleteParameterGroupResponsePrivate class provides private implementation for DeleteParameterGroupResponse.
 * \internal
 *
 * \inmodule QtAwsDAX
 */

/*!
 * Constructs a DeleteParameterGroupResponsePrivate object with public implementation \a q.
 */
DeleteParameterGroupResponsePrivate::DeleteParameterGroupResponsePrivate(
    DeleteParameterGroupResponse * const q) : DaxResponsePrivate(q)
{

}

/*!
 * Parses a DAX DeleteParameterGroup response element from \a xml.
 */
void DeleteParameterGroupResponsePrivate::parseDeleteParameterGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteParameterGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DAX
} // namespace QtAws
