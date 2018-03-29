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

#include "createclusterparametergroupresponse.h"
#include "createclusterparametergroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Redshift {

/**
 * @class  CreateClusterParameterGroupResponse
 *
 * @brief  Handles Redshift CreateClusterParameterGroup responses.
 *
 * @see    RedshiftClient::createClusterParameterGroup
 */

/**
 * @brief  Constructs a new CreateClusterParameterGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateClusterParameterGroupResponse::CreateClusterParameterGroupResponse(
        const CreateClusterParameterGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new CreateClusterParameterGroupResponsePrivate(this), parent)
{
    setRequest(new CreateClusterParameterGroupRequest(request));
    setReply(reply);
}

const CreateClusterParameterGroupRequest * CreateClusterParameterGroupResponse::request() const
{
    Q_D(const CreateClusterParameterGroupResponse);
    return static_cast<const CreateClusterParameterGroupRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift CreateClusterParameterGroup response.
 *
 * @param  response  Response to parse.
 */
void CreateClusterParameterGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateClusterParameterGroupResponsePrivate
 *
 * @brief  Private implementation for CreateClusterParameterGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateClusterParameterGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateClusterParameterGroupResponse instance.
 */
CreateClusterParameterGroupResponsePrivate::CreateClusterParameterGroupResponsePrivate(
    CreateClusterParameterGroupQueueResponse * const q) : CreateClusterParameterGroupPrivate(q)
{

}

/**
 * @brief  Parse an Redshift CreateClusterParameterGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateClusterParameterGroupResponsePrivate::CreateClusterParameterGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateClusterParameterGroupResponse"));
    /// @todo
}

} // namespace Redshift
} // namespace QtAws
