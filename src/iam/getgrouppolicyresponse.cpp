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

#include "getgrouppolicyresponse.h"
#include "getgrouppolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  GetGroupPolicyResponse
 *
 * @brief  Handles IAM GetGroupPolicy responses.
 *
 * @see    IAMClient::getGroupPolicy
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetGroupPolicyResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new GetGroupPolicyResponsePrivate(this), parent)
{
    setRequest(new GetGroupPolicyRequest(request));
    setReply(reply);
}

const GetGroupPolicyRequest * GetGroupPolicyResponse::request() const
{
    Q_D(const GetGroupPolicyResponse);
    return static_cast<const GetGroupPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a IAM GetGroupPolicy response.
 *
 * @param  response  Response to parse.
 */
void GetGroupPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetGroupPolicyResponsePrivate
 *
 * @brief  Private implementation for GetGroupPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetGroupPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetGroupPolicyResponse instance.
 */
GetGroupPolicyResponsePrivate::GetGroupPolicyResponsePrivate(
    GetGroupPolicyQueueResponse * const q) : GetGroupPolicyPrivate(q)
{

}

/**
 * @brief  Parse an IAM GetGroupPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetGroupPolicyResponsePrivate::GetGroupPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetGroupPolicyResponse"));
    /// @todo
}
