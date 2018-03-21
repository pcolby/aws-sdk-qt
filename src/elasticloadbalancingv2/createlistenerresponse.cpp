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

#include "createlistenerresponse.h"
#include "createlistenerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticLoadBalancingv2 {

/**
 * @class  CreateListenerResponse
 *
 * @brief  Handles ElasticLoadBalancingv2 CreateListener responses.
 *
 * @see    ElasticLoadBalancingv2Client::createListener
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateListenerResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingv2Response(new CreateListenerResponsePrivate(this), parent)
{
    setRequest(new CreateListenerRequest(request));
    setReply(reply);
}

const CreateListenerRequest * CreateListenerResponse::request() const
{
    Q_D(const CreateListenerResponse);
    return static_cast<const CreateListenerRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticLoadBalancingv2 CreateListener response.
 *
 * @param  response  Response to parse.
 */
void CreateListenerResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateListenerResponsePrivate
 *
 * @brief  Private implementation for CreateListenerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateListenerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateListenerResponse instance.
 */
CreateListenerResponsePrivate::CreateListenerResponsePrivate(
    CreateListenerQueueResponse * const q) : CreateListenerPrivate(q)
{

}

/**
 * @brief  Parse an ElasticLoadBalancingv2 CreateListenerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateListenerResponsePrivate::CreateListenerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateListenerResponse"));
    /// @todo
}

} // namespace ElasticLoadBalancingv2
} // namespace AWS
