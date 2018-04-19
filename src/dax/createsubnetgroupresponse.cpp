/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createsubnetgroupresponse.h"
#include "createsubnetgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DAX {

/*!
 * \class QtAws::DAX::CreateSubnetGroupResponse
 * \brief The CreateSubnetGroupResponse class provides an interace for DAX CreateSubnetGroup responses.
 *
 * \inmodule QtAwsDAX
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DAXClient::createSubnetGroup
 */

/*!
 * Constructs a CreateSubnetGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSubnetGroupResponse::CreateSubnetGroupResponse(
        const CreateSubnetGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DAXResponse(new CreateSubnetGroupResponsePrivate(this), parent)
{
    setRequest(new CreateSubnetGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSubnetGroupRequest * CreateSubnetGroupResponse::request() const
{
    Q_D(const CreateSubnetGroupResponse);
    return static_cast<const CreateSubnetGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DAX CreateSubnetGroup \a response.
 */
void CreateSubnetGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateSubnetGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DAX::CreateSubnetGroupResponsePrivate
 * \brief The CreateSubnetGroupResponsePrivate class provides private implementation for CreateSubnetGroupResponse.
 * \internal
 *
 * \inmodule QtAwsDAX
 */

/*!
 * Constructs a CreateSubnetGroupResponsePrivate object with public implementation \a q.
 */
CreateSubnetGroupResponsePrivate::CreateSubnetGroupResponsePrivate(
    CreateSubnetGroupResponse * const q) : DAXResponsePrivate(q)
{

}

/*!
 * Parses a DAX CreateSubnetGroup response element from \a xml.
 */
void CreateSubnetGroupResponsePrivate::parseCreateSubnetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSubnetGroupResponse"));
    /// @todo
}

} // namespace DAX
} // namespace QtAws
