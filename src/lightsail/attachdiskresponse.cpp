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

#include "attachdiskresponse.h"
#include "attachdiskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/**
 * @class  AttachDiskResponse
 *
 * @brief  Handles Lightsail AttachDisk responses.
 *
 * @see    LightsailClient::attachDisk
 */

/**
 * @brief  Constructs a new AttachDiskResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AttachDiskResponse::AttachDiskResponse(
        const AttachDiskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AttachDiskResponse(new AttachDiskResponsePrivate(this), parent)
{
    setRequest(new AttachDiskRequest(request));
    setReply(reply);
}

const AttachDiskRequest * AttachDiskResponse::request() const
{
    Q_D(const AttachDiskResponse);
    return static_cast<const AttachDiskRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail AttachDisk response.
 *
 * @param  response  Response to parse.
 */
void AttachDiskResponse::parseSuccess(QIODevice &response)
{
    Q_D(AttachDiskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AttachDiskResponsePrivate
 *
 * @brief  Private implementation for AttachDiskResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AttachDiskResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AttachDiskResponse instance.
 */
AttachDiskResponsePrivate::AttachDiskResponsePrivate(
    AttachDiskResponse * const q) : LightsailResponsePrivate(q)
{

}

/**
 * @brief  Parse an Lightsail AttachDiskResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AttachDiskResponsePrivate::parseAttachDiskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AttachDiskResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace QtAws
