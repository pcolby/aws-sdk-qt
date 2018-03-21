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

#include "describetaskdefinitionresponse.h"
#include "describetaskdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ECS {

/**
 * @class  DescribeTaskDefinitionResponse
 *
 * @brief  Handles ECS DescribeTaskDefinition responses.
 *
 * @see    ECSClient::describeTaskDefinition
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeTaskDefinitionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECSResponse(new DescribeTaskDefinitionResponsePrivate(this), parent)
{
    setRequest(new DescribeTaskDefinitionRequest(request));
    setReply(reply);
}

const DescribeTaskDefinitionRequest * DescribeTaskDefinitionResponse::request() const
{
    Q_D(const DescribeTaskDefinitionResponse);
    return static_cast<const DescribeTaskDefinitionRequest *>(d->request);
}

/**
 * @brief  Parse a ECS DescribeTaskDefinition response.
 *
 * @param  response  Response to parse.
 */
void DescribeTaskDefinitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeTaskDefinitionResponsePrivate
 *
 * @brief  Private implementation for DescribeTaskDefinitionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTaskDefinitionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeTaskDefinitionResponse instance.
 */
DescribeTaskDefinitionResponsePrivate::DescribeTaskDefinitionResponsePrivate(
    DescribeTaskDefinitionQueueResponse * const q) : DescribeTaskDefinitionPrivate(q)
{

}

/**
 * @brief  Parse an ECS DescribeTaskDefinitionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeTaskDefinitionResponsePrivate::DescribeTaskDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTaskDefinitionResponse"));
    /// @todo
}
