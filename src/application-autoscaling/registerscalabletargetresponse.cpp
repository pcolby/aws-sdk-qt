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

#include "registerscalabletargetresponse.h"
#include "registerscalabletargetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ApplicationAutoScaling {

/**
 * @class  RegisterScalableTargetResponse
 *
 * @brief  Handles ApplicationAutoScaling RegisterScalableTarget responses.
 *
 * @see    ApplicationAutoScalingClient::registerScalableTarget
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RegisterScalableTargetResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApplicationAutoScalingResponse(new RegisterScalableTargetResponsePrivate(this), parent)
{
    setRequest(new RegisterScalableTargetRequest(request));
    setReply(reply);
}

const RegisterScalableTargetRequest * RegisterScalableTargetResponse::request() const
{
    Q_D(const RegisterScalableTargetResponse);
    return static_cast<const RegisterScalableTargetRequest *>(d->request);
}

/**
 * @brief  Parse a ApplicationAutoScaling RegisterScalableTarget response.
 *
 * @param  response  Response to parse.
 */
void RegisterScalableTargetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RegisterScalableTargetResponsePrivate
 *
 * @brief  Private implementation for RegisterScalableTargetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterScalableTargetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RegisterScalableTargetResponse instance.
 */
RegisterScalableTargetResponsePrivate::RegisterScalableTargetResponsePrivate(
    RegisterScalableTargetQueueResponse * const q) : RegisterScalableTargetPrivate(q)
{

}

/**
 * @brief  Parse an ApplicationAutoScaling RegisterScalableTargetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RegisterScalableTargetResponsePrivate::RegisterScalableTargetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterScalableTargetResponse"));
    /// @todo
}
