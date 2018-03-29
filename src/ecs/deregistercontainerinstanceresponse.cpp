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

#include "deregistercontainerinstanceresponse.h"
#include "deregistercontainerinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ECS {

/**
 * @class  DeregisterContainerInstanceResponse
 *
 * @brief  Handles ECS DeregisterContainerInstance responses.
 *
 * @see    ECSClient::deregisterContainerInstance
 */

/**
 * @brief  Constructs a new DeregisterContainerInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeregisterContainerInstanceResponse::DeregisterContainerInstanceResponse(
        const DeregisterContainerInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeregisterContainerInstanceResponse(new DeregisterContainerInstanceResponsePrivate(this), parent)
{
    setRequest(new DeregisterContainerInstanceRequest(request));
    setReply(reply);
}

const DeregisterContainerInstanceRequest * DeregisterContainerInstanceResponse::request() const
{
    Q_D(const DeregisterContainerInstanceResponse);
    return static_cast<const DeregisterContainerInstanceRequest *>(d->request);
}

/**
 * @brief  Parse a ECS DeregisterContainerInstance response.
 *
 * @param  response  Response to parse.
 */
void DeregisterContainerInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeregisterContainerInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeregisterContainerInstanceResponsePrivate
 *
 * @brief  Private implementation for DeregisterContainerInstanceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterContainerInstanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeregisterContainerInstanceResponse instance.
 */
DeregisterContainerInstanceResponsePrivate::DeregisterContainerInstanceResponsePrivate(
    DeregisterContainerInstanceResponse * const q) : ECSResponsePrivate(q)
{

}

/**
 * @brief  Parse an ECS DeregisterContainerInstanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeregisterContainerInstanceResponsePrivate::parseDeregisterContainerInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeregisterContainerInstanceResponse"));
    /// @todo
}

} // namespace ECS
} // namespace QtAws
