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

#include "updatestackinstancesresponse.h"
#include "updatestackinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudFormation {

/**
 * @class  UpdateStackInstancesResponse
 *
 * @brief  Handles CloudFormation UpdateStackInstances responses.
 *
 * @see    CloudFormationClient::updateStackInstances
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateStackInstancesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFormationResponse(new UpdateStackInstancesResponsePrivate(this), parent)
{
    setRequest(new UpdateStackInstancesRequest(request));
    setReply(reply);
}

const UpdateStackInstancesRequest * UpdateStackInstancesResponse::request() const
{
    Q_D(const UpdateStackInstancesResponse);
    return static_cast<const UpdateStackInstancesRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFormation UpdateStackInstances response.
 *
 * @param  response  Response to parse.
 */
void UpdateStackInstancesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateStackInstancesResponsePrivate
 *
 * @brief  Private implementation for UpdateStackInstancesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateStackInstancesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateStackInstancesResponse instance.
 */
UpdateStackInstancesResponsePrivate::UpdateStackInstancesResponsePrivate(
    UpdateStackInstancesQueueResponse * const q) : UpdateStackInstancesPrivate(q)
{

}

/**
 * @brief  Parse an CloudFormation UpdateStackInstancesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateStackInstancesResponsePrivate::UpdateStackInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateStackInstancesResponse"));
    /// @todo
}
