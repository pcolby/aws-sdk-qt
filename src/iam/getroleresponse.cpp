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

#include "getroleresponse.h"
#include "getroleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  GetRoleResponse
 *
 * @brief  Handles IAM GetRole responses.
 *
 * @see    IAMClient::getRole
 */

/**
 * @brief  Constructs a new GetRoleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetRoleResponse::GetRoleResponse(
        const GetRoleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new GetRoleResponsePrivate(this), parent)
{
    setRequest(new GetRoleRequest(request));
    setReply(reply);
}

const GetRoleRequest * GetRoleResponse::request() const
{
    Q_D(const GetRoleResponse);
    return static_cast<const GetRoleRequest *>(d->request);
}

/**
 * @brief  Parse a IAM GetRole response.
 *
 * @param  response  Response to parse.
 */
void GetRoleResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetRoleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetRoleResponsePrivate
 *
 * @brief  Private implementation for GetRoleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetRoleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetRoleResponse instance.
 */
GetRoleResponsePrivate::GetRoleResponsePrivate(
    GetRoleResponse * const q) : IAMResponsePrivate(q)
{

}

/**
 * @brief  Parse an IAM GetRoleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetRoleResponsePrivate::parseGetRoleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRoleResponse"));
    /// @todo
}

} // namespace IAM
} // namespace QtAws
