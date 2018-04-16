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
 *
 * \brief The CreateSubnetGroupResponse class provides an interace for DAX CreateSubnetGroup responses.
 *
 * \ingroup DAX
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DAXClient::createSubnetGroup
 */

/*!
 * @brief  Constructs a new CreateSubnetGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
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

const CreateSubnetGroupRequest * CreateSubnetGroupResponse::request() const
{
    Q_D(const CreateSubnetGroupResponse);
    return static_cast<const CreateSubnetGroupRequest *>(d->request);
}

/*!
 * @brief  Parse a DAX CreateSubnetGroup response.
 *
 * @param  response  Response to parse.
 */
void CreateSubnetGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateSubnetGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreateSubnetGroupResponsePrivate
 *
 * \brief Private implementation for CreateSubnetGroupResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateSubnetGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateSubnetGroupResponse instance.
 */
CreateSubnetGroupResponsePrivate::CreateSubnetGroupResponsePrivate(
    CreateSubnetGroupResponse * const q) : DAXResponsePrivate(q)
{

}

/*!
 * @brief  Parse an DAX CreateSubnetGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateSubnetGroupResponsePrivate::parseCreateSubnetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSubnetGroupResponse"));
    /// @todo
}

} // namespace DAX
} // namespace QtAws
