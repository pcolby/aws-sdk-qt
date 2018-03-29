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

#include "openinstancepublicportsresponse.h"
#include "openinstancepublicportsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/**
 * @class  OpenInstancePublicPortsResponse
 *
 * @brief  Handles Lightsail OpenInstancePublicPorts responses.
 *
 * @see    LightsailClient::openInstancePublicPorts
 */

/**
 * @brief  Constructs a new OpenInstancePublicPortsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
OpenInstancePublicPortsResponse::OpenInstancePublicPortsResponse(
        const OpenInstancePublicPortsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpenInstancePublicPortsResponse(new OpenInstancePublicPortsResponsePrivate(this), parent)
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
    Q_D(OpenInstancePublicPortsResponse);
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
    OpenInstancePublicPortsResponse * const q) : LightsailResponsePrivate(q)
{

}

/**
 * @brief  Parse an Lightsail OpenInstancePublicPortsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void OpenInstancePublicPortsResponsePrivate::parseOpenInstancePublicPortsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("OpenInstancePublicPortsResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace QtAws
