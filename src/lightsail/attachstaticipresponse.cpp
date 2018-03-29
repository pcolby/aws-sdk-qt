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

#include "attachstaticipresponse.h"
#include "attachstaticipresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/**
 * @class  AttachStaticIpResponse
 *
 * @brief  Handles Lightsail AttachStaticIp responses.
 *
 * @see    LightsailClient::attachStaticIp
 */

/**
 * @brief  Constructs a new AttachStaticIpResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AttachStaticIpResponse::AttachStaticIpResponse(
        const AttachStaticIpRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new AttachStaticIpResponsePrivate(this), parent)
{
    setRequest(new AttachStaticIpRequest(request));
    setReply(reply);
}

const AttachStaticIpRequest * AttachStaticIpResponse::request() const
{
    Q_D(const AttachStaticIpResponse);
    return static_cast<const AttachStaticIpRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail AttachStaticIp response.
 *
 * @param  response  Response to parse.
 */
void AttachStaticIpResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AttachStaticIpResponsePrivate
 *
 * @brief  Private implementation for AttachStaticIpResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AttachStaticIpResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AttachStaticIpResponse instance.
 */
AttachStaticIpResponsePrivate::AttachStaticIpResponsePrivate(
    AttachStaticIpResponse * const q) : LightsailResponsePrivate(q)
{

}

/**
 * @brief  Parse an Lightsail AttachStaticIpResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AttachStaticIpResponsePrivate::AttachStaticIpResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AttachStaticIpResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace QtAws
