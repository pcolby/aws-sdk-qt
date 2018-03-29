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

#include "createclustersubnetgroupresponse.h"
#include "createclustersubnetgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Redshift {

/**
 * @class  CreateClusterSubnetGroupResponse
 *
 * @brief  Handles Redshift CreateClusterSubnetGroup responses.
 *
 * @see    RedshiftClient::createClusterSubnetGroup
 */

/**
 * @brief  Constructs a new CreateClusterSubnetGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateClusterSubnetGroupResponse::CreateClusterSubnetGroupResponse(
        const CreateClusterSubnetGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new CreateClusterSubnetGroupResponsePrivate(this), parent)
{
    setRequest(new CreateClusterSubnetGroupRequest(request));
    setReply(reply);
}

const CreateClusterSubnetGroupRequest * CreateClusterSubnetGroupResponse::request() const
{
    Q_D(const CreateClusterSubnetGroupResponse);
    return static_cast<const CreateClusterSubnetGroupRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift CreateClusterSubnetGroup response.
 *
 * @param  response  Response to parse.
 */
void CreateClusterSubnetGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateClusterSubnetGroupResponsePrivate
 *
 * @brief  Private implementation for CreateClusterSubnetGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateClusterSubnetGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateClusterSubnetGroupResponse instance.
 */
CreateClusterSubnetGroupResponsePrivate::CreateClusterSubnetGroupResponsePrivate(
    CreateClusterSubnetGroupQueueResponse * const q) : CreateClusterSubnetGroupPrivate(q)
{

}

/**
 * @brief  Parse an Redshift CreateClusterSubnetGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateClusterSubnetGroupResponsePrivate::CreateClusterSubnetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateClusterSubnetGroupResponse"));
    /// @todo
}

} // namespace Redshift
} // namespace QtAws
