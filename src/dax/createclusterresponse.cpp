/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createclusterresponse.h"
#include "createclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DAX {

/**
 * @class  CreateClusterResponse
 *
 * @brief  Handles DAX CreateCluster responses.
 *
 * @see    DAXClient::createCluster
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateClusterResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DAXResponse(new CreateClusterResponsePrivate(this), parent)
{
    setRequest(new CreateClusterRequest(request));
    setReply(reply);
}

const CreateClusterRequest * CreateClusterResponse::request() const
{
    Q_D(const CreateClusterResponse);
    return static_cast<const CreateClusterRequest *>(d->request);
}

/**
 * @brief  Parse a DAX CreateCluster response.
 *
 * @param  response  Response to parse.
 */
void CreateClusterResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateClusterResponsePrivate
 *
 * @brief  Private implementation for CreateClusterResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateClusterResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateClusterResponse instance.
 */
CreateClusterResponsePrivate::CreateClusterResponsePrivate(
    CreateClusterQueueResponse * const q) : CreateClusterPrivate(q)
{

}

/**
 * @brief  Parse an DAX CreateClusterResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateClusterResponsePrivate::CreateClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateClusterResponse"));
    /// @todo
}
