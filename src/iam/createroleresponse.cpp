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

#include "createroleresponse.h"
#include "createroleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  CreateRoleResponse
 *
 * @brief  Handles IAM CreateRole responses.
 *
 * @see    IAMClient::createRole
 */

/**
 * @brief  Constructs a new CreateRoleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateRoleResponse::CreateRoleResponse(
        const CreateRoleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CreateRoleResponse(new CreateRoleResponsePrivate(this), parent)
{
    setRequest(new CreateRoleRequest(request));
    setReply(reply);
}

const CreateRoleRequest * CreateRoleResponse::request() const
{
    Q_D(const CreateRoleResponse);
    return static_cast<const CreateRoleRequest *>(d->request);
}

/**
 * @brief  Parse a IAM CreateRole response.
 *
 * @param  response  Response to parse.
 */
void CreateRoleResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateRoleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateRoleResponsePrivate
 *
 * @brief  Private implementation for CreateRoleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateRoleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateRoleResponse instance.
 */
CreateRoleResponsePrivate::CreateRoleResponsePrivate(
    CreateRoleResponse * const q) : IAMResponsePrivate(q)
{

}

/**
 * @brief  Parse an IAM CreateRoleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateRoleResponsePrivate::parseCreateRoleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateRoleResponse"));
    /// @todo
}

} // namespace IAM
} // namespace QtAws
