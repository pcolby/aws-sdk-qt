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

#include "registercontainerinstanceresponse.h"
#include "registercontainerinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ECS {

/**
 * @class  RegisterContainerInstanceResponse
 *
 * @brief  Handles ECS RegisterContainerInstance responses.
 *
 * @see    ECSClient::registerContainerInstance
 */

/**
 * @brief  Constructs a new RegisterContainerInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RegisterContainerInstanceResponse::RegisterContainerInstanceResponse(
        const RegisterContainerInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECSResponse(new RegisterContainerInstanceResponsePrivate(this), parent)
{
    setRequest(new RegisterContainerInstanceRequest(request));
    setReply(reply);
}

const RegisterContainerInstanceRequest * RegisterContainerInstanceResponse::request() const
{
    Q_D(const RegisterContainerInstanceResponse);
    return static_cast<const RegisterContainerInstanceRequest *>(d->request);
}

/**
 * @brief  Parse a ECS RegisterContainerInstance response.
 *
 * @param  response  Response to parse.
 */
void RegisterContainerInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(RegisterContainerInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RegisterContainerInstanceResponsePrivate
 *
 * @brief  Private implementation for RegisterContainerInstanceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterContainerInstanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RegisterContainerInstanceResponse instance.
 */
RegisterContainerInstanceResponsePrivate::RegisterContainerInstanceResponsePrivate(
    RegisterContainerInstanceResponse * const q) : ECSResponsePrivate(q)
{

}

/**
 * @brief  Parse an ECS RegisterContainerInstanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RegisterContainerInstanceResponsePrivate::RegisterContainerInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterContainerInstanceResponse"));
    /// @todo
}

} // namespace ECS
} // namespace QtAws
