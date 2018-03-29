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

#include "closeinstancepublicportsresponse.h"
#include "closeinstancepublicportsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/**
 * @class  CloseInstancePublicPortsResponse
 *
 * @brief  Handles Lightsail CloseInstancePublicPorts responses.
 *
 * @see    LightsailClient::closeInstancePublicPorts
 */

/**
 * @brief  Constructs a new CloseInstancePublicPortsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CloseInstancePublicPortsResponse::CloseInstancePublicPortsResponse(
        const CloseInstancePublicPortsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new CloseInstancePublicPortsResponsePrivate(this), parent)
{
    setRequest(new CloseInstancePublicPortsRequest(request));
    setReply(reply);
}

const CloseInstancePublicPortsRequest * CloseInstancePublicPortsResponse::request() const
{
    Q_D(const CloseInstancePublicPortsResponse);
    return static_cast<const CloseInstancePublicPortsRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail CloseInstancePublicPorts response.
 *
 * @param  response  Response to parse.
 */
void CloseInstancePublicPortsResponse::parseSuccess(QIODevice &response)
{
    Q_D(CloseInstancePublicPortsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CloseInstancePublicPortsResponsePrivate
 *
 * @brief  Private implementation for CloseInstancePublicPortsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CloseInstancePublicPortsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CloseInstancePublicPortsResponse instance.
 */
CloseInstancePublicPortsResponsePrivate::CloseInstancePublicPortsResponsePrivate(
    CloseInstancePublicPortsResponse * const q) : LightsailResponsePrivate(q)
{

}

/**
 * @brief  Parse an Lightsail CloseInstancePublicPortsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CloseInstancePublicPortsResponsePrivate::CloseInstancePublicPortsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CloseInstancePublicPortsResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace QtAws
