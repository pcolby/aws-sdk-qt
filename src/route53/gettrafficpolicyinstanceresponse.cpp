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

#include "gettrafficpolicyinstanceresponse.h"
#include "gettrafficpolicyinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Route53 {

/**
 * @class  GetTrafficPolicyInstanceResponse
 *
 * @brief  Handles Route53 GetTrafficPolicyInstance responses.
 *
 * @see    Route53Client::getTrafficPolicyInstance
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetTrafficPolicyInstanceResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new GetTrafficPolicyInstanceResponsePrivate(this), parent)
{
    setRequest(new GetTrafficPolicyInstanceRequest(request));
    setReply(reply);
}

const GetTrafficPolicyInstanceRequest * GetTrafficPolicyInstanceResponse::request() const
{
    Q_D(const GetTrafficPolicyInstanceResponse);
    return static_cast<const GetTrafficPolicyInstanceRequest *>(d->request);
}

/**
 * @brief  Parse a Route53 GetTrafficPolicyInstance response.
 *
 * @param  response  Response to parse.
 */
void GetTrafficPolicyInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetTrafficPolicyInstanceResponsePrivate
 *
 * @brief  Private implementation for GetTrafficPolicyInstanceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetTrafficPolicyInstanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetTrafficPolicyInstanceResponse instance.
 */
GetTrafficPolicyInstanceResponsePrivate::GetTrafficPolicyInstanceResponsePrivate(
    GetTrafficPolicyInstanceQueueResponse * const q) : GetTrafficPolicyInstancePrivate(q)
{

}

/**
 * @brief  Parse an Route53 GetTrafficPolicyInstanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetTrafficPolicyInstanceResponsePrivate::GetTrafficPolicyInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTrafficPolicyInstanceResponse"));
    /// @todo
}
