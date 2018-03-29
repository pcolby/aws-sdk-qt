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

#include "deleterouteresponse.h"
#include "deleterouteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  DeleteRouteResponse
 *
 * @brief  Handles EC2 DeleteRoute responses.
 *
 * @see    EC2Client::deleteRoute
 */

/**
 * @brief  Constructs a new DeleteRouteResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteRouteResponse::DeleteRouteResponse(
        const DeleteRouteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DeleteRouteResponsePrivate(this), parent)
{
    setRequest(new DeleteRouteRequest(request));
    setReply(reply);
}

const DeleteRouteRequest * DeleteRouteResponse::request() const
{
    Q_D(const DeleteRouteResponse);
    return static_cast<const DeleteRouteRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DeleteRoute response.
 *
 * @param  response  Response to parse.
 */
void DeleteRouteResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteRouteResponsePrivate
 *
 * @brief  Private implementation for DeleteRouteResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRouteResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteRouteResponse instance.
 */
DeleteRouteResponsePrivate::DeleteRouteResponsePrivate(
    DeleteRouteQueueResponse * const q) : DeleteRoutePrivate(q)
{

}

/**
 * @brief  Parse an EC2 DeleteRouteResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteRouteResponsePrivate::DeleteRouteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRouteResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
