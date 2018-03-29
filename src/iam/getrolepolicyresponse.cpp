/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getrolepolicyresponse.h"
#include "getrolepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  GetRolePolicyResponse
 *
 * @brief  Handles IAM GetRolePolicy responses.
 *
 * @see    IAMClient::getRolePolicy
 */

/**
 * @brief  Constructs a new GetRolePolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetRolePolicyResponse::GetRolePolicyResponse(
        const GetRolePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GetRolePolicyResponse(new GetRolePolicyResponsePrivate(this), parent)
{
    setRequest(new GetRolePolicyRequest(request));
    setReply(reply);
}

const GetRolePolicyRequest * GetRolePolicyResponse::request() const
{
    Q_D(const GetRolePolicyResponse);
    return static_cast<const GetRolePolicyRequest *>(d->request);
}

/**
 * @brief  Parse a IAM GetRolePolicy response.
 *
 * @param  response  Response to parse.
 */
void GetRolePolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetRolePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetRolePolicyResponsePrivate
 *
 * @brief  Private implementation for GetRolePolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetRolePolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetRolePolicyResponse instance.
 */
GetRolePolicyResponsePrivate::GetRolePolicyResponsePrivate(
    GetRolePolicyResponse * const q) : IAMResponsePrivate(q)
{

}

/**
 * @brief  Parse an IAM GetRolePolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetRolePolicyResponsePrivate::parseGetRolePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRolePolicyResponse"));
    /// @todo
}

} // namespace IAM
} // namespace QtAws
