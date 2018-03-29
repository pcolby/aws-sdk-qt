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

#include "creatediskresponse.h"
#include "creatediskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Lightsail {

/**
 * @class  CreateDiskResponse
 *
 * @brief  Handles Lightsail CreateDisk responses.
 *
 * @see    LightsailClient::createDisk
 */

/**
 * @brief  Constructs a new CreateDiskResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDiskResponse::CreateDiskResponse(
        const CreateDiskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new CreateDiskResponsePrivate(this), parent)
{
    setRequest(new CreateDiskRequest(request));
    setReply(reply);
}

const CreateDiskRequest * CreateDiskResponse::request() const
{
    Q_D(const CreateDiskResponse);
    return static_cast<const CreateDiskRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail CreateDisk response.
 *
 * @param  response  Response to parse.
 */
void CreateDiskResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateDiskResponsePrivate
 *
 * @brief  Private implementation for CreateDiskResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDiskResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateDiskResponse instance.
 */
CreateDiskResponsePrivate::CreateDiskResponsePrivate(
    CreateDiskQueueResponse * const q) : CreateDiskPrivate(q)
{

}

/**
 * @brief  Parse an Lightsail CreateDiskResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateDiskResponsePrivate::CreateDiskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDiskResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace AWS
