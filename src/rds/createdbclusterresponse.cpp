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

#include "createdbclusterresponse.h"
#include "createdbclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace RDS {

/**
 * @class  CreateDBClusterResponse
 *
 * @brief  Handles RDS CreateDBCluster responses.
 *
 * @see    RDSClient::createDBCluster
 */

/**
 * @brief  Constructs a new CreateDBClusterResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDBClusterResponse::CreateDBClusterResponse(
        const CreateDBClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new CreateDBClusterResponsePrivate(this), parent)
{
    setRequest(new CreateDBClusterRequest(request));
    setReply(reply);
}

const CreateDBClusterRequest * CreateDBClusterResponse::request() const
{
    Q_D(const CreateDBClusterResponse);
    return static_cast<const CreateDBClusterRequest *>(d->request);
}

/**
 * @brief  Parse a RDS CreateDBCluster response.
 *
 * @param  response  Response to parse.
 */
void CreateDBClusterResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateDBClusterResponsePrivate
 *
 * @brief  Private implementation for CreateDBClusterResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDBClusterResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateDBClusterResponse instance.
 */
CreateDBClusterResponsePrivate::CreateDBClusterResponsePrivate(
    CreateDBClusterQueueResponse * const q) : CreateDBClusterPrivate(q)
{

}

/**
 * @brief  Parse an RDS CreateDBClusterResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateDBClusterResponsePrivate::CreateDBClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDBClusterResponse"));
    /// @todo
}

} // namespace RDS
} // namespace AWS
