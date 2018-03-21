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

#include "getpermissionpolicyresponse.h"
#include "getpermissionpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAFRegional {

/**
 * @class  GetPermissionPolicyResponse
 *
 * @brief  Handles WAFRegional GetPermissionPolicy responses.
 *
 * @see    WAFRegionalClient::getPermissionPolicy
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetPermissionPolicyResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new GetPermissionPolicyResponsePrivate(this), parent)
{
    setRequest(new GetPermissionPolicyRequest(request));
    setReply(reply);
}

const GetPermissionPolicyRequest * GetPermissionPolicyResponse::request() const
{
    Q_D(const GetPermissionPolicyResponse);
    return static_cast<const GetPermissionPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a WAFRegional GetPermissionPolicy response.
 *
 * @param  response  Response to parse.
 */
void GetPermissionPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetPermissionPolicyResponsePrivate
 *
 * @brief  Private implementation for GetPermissionPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetPermissionPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetPermissionPolicyResponse instance.
 */
GetPermissionPolicyResponsePrivate::GetPermissionPolicyResponsePrivate(
    GetPermissionPolicyQueueResponse * const q) : GetPermissionPolicyPrivate(q)
{

}

/**
 * @brief  Parse an WAFRegional GetPermissionPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetPermissionPolicyResponsePrivate::GetPermissionPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPermissionPolicyResponse"));
    /// @todo
}

} // namespace WAFRegional
} // namespace AWS
