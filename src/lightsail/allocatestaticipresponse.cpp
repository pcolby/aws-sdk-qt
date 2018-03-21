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

#include "allocatestaticipresponse.h"
#include "allocatestaticipresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Lightsail {

/**
 * @class  AllocateStaticIpResponse
 *
 * @brief  Handles Lightsail AllocateStaticIp responses.
 *
 * @see    LightsailClient::allocateStaticIp
 */

/**
 * @brief  Constructs a new AllocateStaticIpResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AllocateStaticIpResponse::AllocateStaticIpResponse(
        const AllocateStaticIpRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new AllocateStaticIpResponsePrivate(this), parent)
{
    setRequest(new AllocateStaticIpRequest(request));
    setReply(reply);
}

const AllocateStaticIpRequest * AllocateStaticIpResponse::request() const
{
    Q_D(const AllocateStaticIpResponse);
    return static_cast<const AllocateStaticIpRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail AllocateStaticIp response.
 *
 * @param  response  Response to parse.
 */
void AllocateStaticIpResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AllocateStaticIpResponsePrivate
 *
 * @brief  Private implementation for AllocateStaticIpResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AllocateStaticIpResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AllocateStaticIpResponse instance.
 */
AllocateStaticIpResponsePrivate::AllocateStaticIpResponsePrivate(
    AllocateStaticIpQueueResponse * const q) : AllocateStaticIpPrivate(q)
{

}

/**
 * @brief  Parse an Lightsail AllocateStaticIpResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AllocateStaticIpResponsePrivate::AllocateStaticIpResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AllocateStaticIpResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace AWS
