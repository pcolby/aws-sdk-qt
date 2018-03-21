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

#include "detachstaticipresponse.h"
#include "detachstaticipresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Lightsail {

/**
 * @class  DetachStaticIpResponse
 *
 * @brief  Handles Lightsail DetachStaticIp responses.
 *
 * @see    LightsailClient::detachStaticIp
 */

/**
 * @brief  Constructs a new DetachStaticIpResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DetachStaticIpResponse::DetachStaticIpResponse(
        const DetachStaticIpRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new DetachStaticIpResponsePrivate(this), parent)
{
    setRequest(new DetachStaticIpRequest(request));
    setReply(reply);
}

const DetachStaticIpRequest * DetachStaticIpResponse::request() const
{
    Q_D(const DetachStaticIpResponse);
    return static_cast<const DetachStaticIpRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail DetachStaticIp response.
 *
 * @param  response  Response to parse.
 */
void DetachStaticIpResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DetachStaticIpResponsePrivate
 *
 * @brief  Private implementation for DetachStaticIpResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetachStaticIpResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DetachStaticIpResponse instance.
 */
DetachStaticIpResponsePrivate::DetachStaticIpResponsePrivate(
    DetachStaticIpQueueResponse * const q) : DetachStaticIpPrivate(q)
{

}

/**
 * @brief  Parse an Lightsail DetachStaticIpResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DetachStaticIpResponsePrivate::DetachStaticIpResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetachStaticIpResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace AWS
