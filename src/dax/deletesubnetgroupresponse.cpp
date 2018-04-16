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

#include "deletesubnetgroupresponse.h"
#include "deletesubnetgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DAX {

/*!
 * \class QtAws::DAX::DeleteSubnetGroupResponse
 *
 * \brief The DeleteSubnetGroupResponse class encapsulates DAX DeleteSubnetGroup responses.
 *
 * \ingroup DAX
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DAXClient::deleteSubnetGroup
 */

/*!
 * @brief  Constructs a new DeleteSubnetGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteSubnetGroupResponse::DeleteSubnetGroupResponse(
        const DeleteSubnetGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DAXResponse(new DeleteSubnetGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteSubnetGroupRequest(request));
    setReply(reply);
}

const DeleteSubnetGroupRequest * DeleteSubnetGroupResponse::request() const
{
    Q_D(const DeleteSubnetGroupResponse);
    return static_cast<const DeleteSubnetGroupRequest *>(d->request);
}

/*!
 * @brief  Parse a DAX DeleteSubnetGroup response.
 *
 * @param  response  Response to parse.
 */
void DeleteSubnetGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteSubnetGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteSubnetGroupResponsePrivate
 *
 * \brief Private implementation for DeleteSubnetGroupResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteSubnetGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteSubnetGroupResponse instance.
 */
DeleteSubnetGroupResponsePrivate::DeleteSubnetGroupResponsePrivate(
    DeleteSubnetGroupResponse * const q) : DAXResponsePrivate(q)
{

}

/*!
 * @brief  Parse an DAX DeleteSubnetGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteSubnetGroupResponsePrivate::parseDeleteSubnetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSubnetGroupResponse"));
    /// @todo
}

} // namespace DAX
} // namespace QtAws
