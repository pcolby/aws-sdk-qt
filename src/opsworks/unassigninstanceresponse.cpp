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

#include "unassigninstanceresponse.h"
#include "unassigninstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace OpsWorks {

/**
 * @class  UnassignInstanceResponse
 *
 * @brief  Handles OpsWorks UnassignInstance responses.
 *
 * @see    OpsWorksClient::unassignInstance
 */

/**
 * @brief  Constructs a new UnassignInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UnassignInstanceResponse::UnassignInstanceResponse(
        const UnassignInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new UnassignInstanceResponsePrivate(this), parent)
{
    setRequest(new UnassignInstanceRequest(request));
    setReply(reply);
}

const UnassignInstanceRequest * UnassignInstanceResponse::request() const
{
    Q_D(const UnassignInstanceResponse);
    return static_cast<const UnassignInstanceRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks UnassignInstance response.
 *
 * @param  response  Response to parse.
 */
void UnassignInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UnassignInstanceResponsePrivate
 *
 * @brief  Private implementation for UnassignInstanceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UnassignInstanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UnassignInstanceResponse instance.
 */
UnassignInstanceResponsePrivate::UnassignInstanceResponsePrivate(
    UnassignInstanceQueueResponse * const q) : UnassignInstancePrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks UnassignInstanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UnassignInstanceResponsePrivate::UnassignInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UnassignInstanceResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace AWS
