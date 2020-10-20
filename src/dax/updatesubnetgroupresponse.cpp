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

#include "updatesubnetgroupresponse.h"
#include "updatesubnetgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DAX {

/*!
 * \class QtAws::DAX::UpdateSubnetGroupResponse
 * \brief The UpdateSubnetGroupResponse class provides an interace for DAX UpdateSubnetGroup responses.
 *
 * \inmodule QtAwsDAX
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DaxClient::updateSubnetGroup
 */

/*!
 * Constructs a UpdateSubnetGroupResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateSubnetGroupResponse::UpdateSubnetGroupResponse(
        const UpdateSubnetGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DaxResponse(new UpdateSubnetGroupResponsePrivate(this), parent)
{
    setRequest(new UpdateSubnetGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateSubnetGroupRequest * UpdateSubnetGroupResponse::request() const
{
    Q_D(const UpdateSubnetGroupResponse);
    return static_cast<const UpdateSubnetGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DAX UpdateSubnetGroup \a response.
 */
void UpdateSubnetGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateSubnetGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DAX::UpdateSubnetGroupResponsePrivate
 * \brief The UpdateSubnetGroupResponsePrivate class provides private implementation for UpdateSubnetGroupResponse.
 * \internal
 *
 * \inmodule QtAwsDAX
 */

/*!
 * Constructs a UpdateSubnetGroupResponsePrivate object with public implementation \a q.
 */
UpdateSubnetGroupResponsePrivate::UpdateSubnetGroupResponsePrivate(
    UpdateSubnetGroupResponse * const q) : DaxResponsePrivate(q)
{

}

/*!
 * Parses a DAX UpdateSubnetGroup response element from \a xml.
 */
void UpdateSubnetGroupResponsePrivate::parseUpdateSubnetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSubnetGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DAX
} // namespace QtAws
