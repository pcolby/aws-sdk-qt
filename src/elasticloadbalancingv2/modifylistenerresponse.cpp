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

#include "modifylistenerresponse.h"
#include "modifylistenerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticLoadBalancingv2 {

/**
 * @class  ModifyListenerResponse
 *
 * @brief  Handles ElasticLoadBalancingv2 ModifyListener responses.
 *
 * @see    ElasticLoadBalancingv2Client::modifyListener
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyListenerResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingv2Response(new ModifyListenerResponsePrivate(this), parent)
{
    setRequest(new ModifyListenerRequest(request));
    setReply(reply);
}

const ModifyListenerRequest * ModifyListenerResponse::request() const
{
    Q_D(const ModifyListenerResponse);
    return static_cast<const ModifyListenerRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticLoadBalancingv2 ModifyListener response.
 *
 * @param  response  Response to parse.
 */
void ModifyListenerResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifyListenerResponsePrivate
 *
 * @brief  Private implementation for ModifyListenerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyListenerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyListenerResponse instance.
 */
ModifyListenerResponsePrivate::ModifyListenerResponsePrivate(
    ModifyListenerQueueResponse * const q) : ModifyListenerPrivate(q)
{

}

/**
 * @brief  Parse an ElasticLoadBalancingv2 ModifyListenerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyListenerResponsePrivate::ModifyListenerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyListenerResponse"));
    /// @todo
}
