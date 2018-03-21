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

#include "createstackinstancesresponse.h"
#include "createstackinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudFormation {

/**
 * @class  CreateStackInstancesResponse
 *
 * @brief  Handles CloudFormation CreateStackInstances responses.
 *
 * @see    CloudFormationClient::createStackInstances
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateStackInstancesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFormationResponse(new CreateStackInstancesResponsePrivate(this), parent)
{
    setRequest(new CreateStackInstancesRequest(request));
    setReply(reply);
}

const CreateStackInstancesRequest * CreateStackInstancesResponse::request() const
{
    Q_D(const CreateStackInstancesResponse);
    return static_cast<const CreateStackInstancesRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFormation CreateStackInstances response.
 *
 * @param  response  Response to parse.
 */
void CreateStackInstancesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateStackInstancesResponsePrivate
 *
 * @brief  Private implementation for CreateStackInstancesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateStackInstancesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateStackInstancesResponse instance.
 */
CreateStackInstancesResponsePrivate::CreateStackInstancesResponsePrivate(
    CreateStackInstancesQueueResponse * const q) : CreateStackInstancesPrivate(q)
{

}

/**
 * @brief  Parse an CloudFormation CreateStackInstancesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateStackInstancesResponsePrivate::CreateStackInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateStackInstancesResponse"));
    /// @todo
}

} // namespace CloudFormation
} // namespace AWS
