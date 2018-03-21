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

#include "releasestaticipresponse.h"
#include "releasestaticipresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Lightsail {

/**
 * @class  ReleaseStaticIpResponse
 *
 * @brief  Handles Lightsail ReleaseStaticIp responses.
 *
 * @see    LightsailClient::releaseStaticIp
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ReleaseStaticIpResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new ReleaseStaticIpResponsePrivate(this), parent)
{
    setRequest(new ReleaseStaticIpRequest(request));
    setReply(reply);
}

const ReleaseStaticIpRequest * ReleaseStaticIpResponse::request() const
{
    Q_D(const ReleaseStaticIpResponse);
    return static_cast<const ReleaseStaticIpRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail ReleaseStaticIp response.
 *
 * @param  response  Response to parse.
 */
void ReleaseStaticIpResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ReleaseStaticIpResponsePrivate
 *
 * @brief  Private implementation for ReleaseStaticIpResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ReleaseStaticIpResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ReleaseStaticIpResponse instance.
 */
ReleaseStaticIpResponsePrivate::ReleaseStaticIpResponsePrivate(
    ReleaseStaticIpQueueResponse * const q) : ReleaseStaticIpPrivate(q)
{

}

/**
 * @brief  Parse an Lightsail ReleaseStaticIpResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ReleaseStaticIpResponsePrivate::ReleaseStaticIpResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ReleaseStaticIpResponse"));
    /// @todo
}
