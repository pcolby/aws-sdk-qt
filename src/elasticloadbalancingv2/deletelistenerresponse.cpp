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

#include "deletelistenerresponse.h"
#include "deletelistenerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticLoadBalancingv2 {

/**
 * @class  DeleteListenerResponse
 *
 * @brief  Handles ElasticLoadBalancingv2 DeleteListener responses.
 *
 * @see    ElasticLoadBalancingv2Client::deleteListener
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteListenerResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingv2Response(new DeleteListenerResponsePrivate(this), parent)
{
    setRequest(new DeleteListenerRequest(request));
    setReply(reply);
}

const DeleteListenerRequest * DeleteListenerResponse::request() const
{
    Q_D(const DeleteListenerResponse);
    return static_cast<const DeleteListenerRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticLoadBalancingv2 DeleteListener response.
 *
 * @param  response  Response to parse.
 */
void DeleteListenerResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteListenerResponsePrivate
 *
 * @brief  Private implementation for DeleteListenerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteListenerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteListenerResponse instance.
 */
DeleteListenerResponsePrivate::DeleteListenerResponsePrivate(
    DeleteListenerQueueResponse * const q) : DeleteListenerPrivate(q)
{

}

/**
 * @brief  Parse an ElasticLoadBalancingv2 DeleteListenerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteListenerResponsePrivate::DeleteListenerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteListenerResponse"));
    /// @todo
}
