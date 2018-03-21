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

#include "getpolicyresponse.h"
#include "getpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Lambda {

/**
 * @class  GetPolicyResponse
 *
 * @brief  Handles Lambda GetPolicy responses.
 *
 * @see    LambdaClient::getPolicy
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetPolicyResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LambdaResponse(new GetPolicyResponsePrivate(this), parent)
{
    setRequest(new GetPolicyRequest(request));
    setReply(reply);
}

const GetPolicyRequest * GetPolicyResponse::request() const
{
    Q_D(const GetPolicyResponse);
    return static_cast<const GetPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a Lambda GetPolicy response.
 *
 * @param  response  Response to parse.
 */
void GetPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetPolicyResponsePrivate
 *
 * @brief  Private implementation for GetPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetPolicyResponse instance.
 */
GetPolicyResponsePrivate::GetPolicyResponsePrivate(
    GetPolicyQueueResponse * const q) : GetPolicyPrivate(q)
{

}

/**
 * @brief  Parse an Lambda GetPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetPolicyResponsePrivate::GetPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPolicyResponse"));
    /// @todo
}

} // namespace Lambda
} // namespace AWS
