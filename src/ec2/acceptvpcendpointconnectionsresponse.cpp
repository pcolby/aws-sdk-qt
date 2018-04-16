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

#include "acceptvpcendpointconnectionsresponse.h"
#include "acceptvpcendpointconnectionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::AcceptVpcEndpointConnectionsResponse
 *
 * \brief The AcceptVpcEndpointConnectionsResponse class provides an interace for EC2 AcceptVpcEndpointConnections responses.
 *
 * \ingroup EC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::acceptVpcEndpointConnections
 */

/*!
 * @brief  Constructs a new AcceptVpcEndpointConnectionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AcceptVpcEndpointConnectionsResponse::AcceptVpcEndpointConnectionsResponse(
        const AcceptVpcEndpointConnectionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new AcceptVpcEndpointConnectionsResponsePrivate(this), parent)
{
    setRequest(new AcceptVpcEndpointConnectionsRequest(request));
    setReply(reply);
}

const AcceptVpcEndpointConnectionsRequest * AcceptVpcEndpointConnectionsResponse::request() const
{
    Q_D(const AcceptVpcEndpointConnectionsResponse);
    return static_cast<const AcceptVpcEndpointConnectionsRequest *>(d->request);
}

/*!
 * @brief  Parse a EC2 AcceptVpcEndpointConnections response.
 *
 * @param  response  Response to parse.
 */
void AcceptVpcEndpointConnectionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(AcceptVpcEndpointConnectionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class AcceptVpcEndpointConnectionsResponsePrivate
 *
 * \brief Private implementation for AcceptVpcEndpointConnectionsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new AcceptVpcEndpointConnectionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AcceptVpcEndpointConnectionsResponse instance.
 */
AcceptVpcEndpointConnectionsResponsePrivate::AcceptVpcEndpointConnectionsResponsePrivate(
    AcceptVpcEndpointConnectionsResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * @brief  Parse an EC2 AcceptVpcEndpointConnectionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AcceptVpcEndpointConnectionsResponsePrivate::parseAcceptVpcEndpointConnectionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AcceptVpcEndpointConnectionsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
