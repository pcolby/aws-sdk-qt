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

#include "replacerouteresponse.h"
#include "replacerouteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  ReplaceRouteResponse
 *
 * @brief  Handles EC2 ReplaceRoute responses.
 *
 * @see    EC2Client::replaceRoute
 */

/**
 * @brief  Constructs a new ReplaceRouteResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ReplaceRouteResponse::ReplaceRouteResponse(
        const ReplaceRouteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ReplaceRouteResponse(new ReplaceRouteResponsePrivate(this), parent)
{
    setRequest(new ReplaceRouteRequest(request));
    setReply(reply);
}

const ReplaceRouteRequest * ReplaceRouteResponse::request() const
{
    Q_D(const ReplaceRouteResponse);
    return static_cast<const ReplaceRouteRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 ReplaceRoute response.
 *
 * @param  response  Response to parse.
 */
void ReplaceRouteResponse::parseSuccess(QIODevice &response)
{
    Q_D(ReplaceRouteResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ReplaceRouteResponsePrivate
 *
 * @brief  Private implementation for ReplaceRouteResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ReplaceRouteResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ReplaceRouteResponse instance.
 */
ReplaceRouteResponsePrivate::ReplaceRouteResponsePrivate(
    ReplaceRouteResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 ReplaceRouteResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ReplaceRouteResponsePrivate::parseReplaceRouteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ReplaceRouteResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
