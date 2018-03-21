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

#include "openinstancepublicportsresponse.h"
#include "openinstancepublicportsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Lightsail {

/**
 * @class  OpenInstancePublicPortsResponse
 *
 * @brief  Handles Lightsail OpenInstancePublicPorts responses.
 *
 * @see    LightsailClient::openInstancePublicPorts
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
OpenInstancePublicPortsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new OpenInstancePublicPortsResponsePrivate(this), parent)
{
    setRequest(new OpenInstancePublicPortsRequest(request));
    setReply(reply);
}

const OpenInstancePublicPortsRequest * OpenInstancePublicPortsResponse::request() const
{
    Q_D(const OpenInstancePublicPortsResponse);
    return static_cast<const OpenInstancePublicPortsRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail OpenInstancePublicPorts response.
 *
 * @param  response  Response to parse.
 */
void OpenInstancePublicPortsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  OpenInstancePublicPortsResponsePrivate
 *
 * @brief  Private implementation for OpenInstancePublicPortsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new OpenInstancePublicPortsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public OpenInstancePublicPortsResponse instance.
 */
OpenInstancePublicPortsResponsePrivate::OpenInstancePublicPortsResponsePrivate(
    OpenInstancePublicPortsQueueResponse * const q) : OpenInstancePublicPortsPrivate(q)
{

}

/**
 * @brief  Parse an Lightsail OpenInstancePublicPortsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void OpenInstancePublicPortsResponsePrivate::OpenInstancePublicPortsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("OpenInstancePublicPortsResponse"));
    /// @todo
}
