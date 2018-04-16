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

#include "deletevpnconnectionrouteresponse.h"
#include "deletevpnconnectionrouteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DeleteVpnConnectionRouteResponse
 *
 * \brief The DeleteVpnConnectionRouteResponse class provides an interace for EC2 DeleteVpnConnectionRoute responses.
 *
 * \ingroup EC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::deleteVpnConnectionRoute
 */

/*!
 * @brief  Constructs a new DeleteVpnConnectionRouteResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteVpnConnectionRouteResponse::DeleteVpnConnectionRouteResponse(
        const DeleteVpnConnectionRouteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DeleteVpnConnectionRouteResponsePrivate(this), parent)
{
    setRequest(new DeleteVpnConnectionRouteRequest(request));
    setReply(reply);
}

const DeleteVpnConnectionRouteRequest * DeleteVpnConnectionRouteResponse::request() const
{
    Q_D(const DeleteVpnConnectionRouteResponse);
    return static_cast<const DeleteVpnConnectionRouteRequest *>(d->request);
}

/*!
 * @brief  Parse a EC2 DeleteVpnConnectionRoute response.
 *
 * @param  response  Response to parse.
 */
void DeleteVpnConnectionRouteResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteVpnConnectionRouteResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteVpnConnectionRouteResponsePrivate
 *
 * \brief Private implementation for DeleteVpnConnectionRouteResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteVpnConnectionRouteResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteVpnConnectionRouteResponse instance.
 */
DeleteVpnConnectionRouteResponsePrivate::DeleteVpnConnectionRouteResponsePrivate(
    DeleteVpnConnectionRouteResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * @brief  Parse an EC2 DeleteVpnConnectionRouteResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteVpnConnectionRouteResponsePrivate::parseDeleteVpnConnectionRouteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVpnConnectionRouteResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
