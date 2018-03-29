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

#include "createdbclusterparametergroupresponse.h"
#include "createdbclusterparametergroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RDS {

/**
 * @class  CreateDBClusterParameterGroupResponse
 *
 * @brief  Handles RDS CreateDBClusterParameterGroup responses.
 *
 * @see    RDSClient::createDBClusterParameterGroup
 */

/**
 * @brief  Constructs a new CreateDBClusterParameterGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDBClusterParameterGroupResponse::CreateDBClusterParameterGroupResponse(
        const CreateDBClusterParameterGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new CreateDBClusterParameterGroupResponsePrivate(this), parent)
{
    setRequest(new CreateDBClusterParameterGroupRequest(request));
    setReply(reply);
}

const CreateDBClusterParameterGroupRequest * CreateDBClusterParameterGroupResponse::request() const
{
    Q_D(const CreateDBClusterParameterGroupResponse);
    return static_cast<const CreateDBClusterParameterGroupRequest *>(d->request);
}

/**
 * @brief  Parse a RDS CreateDBClusterParameterGroup response.
 *
 * @param  response  Response to parse.
 */
void CreateDBClusterParameterGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateDBClusterParameterGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateDBClusterParameterGroupResponsePrivate
 *
 * @brief  Private implementation for CreateDBClusterParameterGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDBClusterParameterGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateDBClusterParameterGroupResponse instance.
 */
CreateDBClusterParameterGroupResponsePrivate::CreateDBClusterParameterGroupResponsePrivate(
    CreateDBClusterParameterGroupResponse * const q) : RDSResponsePrivate(q)
{

}

/**
 * @brief  Parse an RDS CreateDBClusterParameterGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateDBClusterParameterGroupResponsePrivate::parseCreateDBClusterParameterGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDBClusterParameterGroupResponse"));
    /// @todo
}

} // namespace RDS
} // namespace QtAws
