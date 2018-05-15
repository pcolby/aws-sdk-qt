/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletevpngatewayresponse.h"
#include "deletevpngatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DeleteVpnGatewayResponse
 * \brief The DeleteVpnGatewayResponse class provides an interace for EC2 DeleteVpnGateway responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::deleteVpnGateway
 */

/*!
 * Constructs a DeleteVpnGatewayResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteVpnGatewayResponse::DeleteVpnGatewayResponse(
        const DeleteVpnGatewayRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DeleteVpnGatewayResponsePrivate(this), parent)
{
    setRequest(new DeleteVpnGatewayRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteVpnGatewayRequest * DeleteVpnGatewayResponse::request() const
{
    Q_D(const DeleteVpnGatewayResponse);
    return static_cast<const DeleteVpnGatewayRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DeleteVpnGateway \a response.
 */
void DeleteVpnGatewayResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteVpnGatewayResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DeleteVpnGatewayResponsePrivate
 * \brief The DeleteVpnGatewayResponsePrivate class provides private implementation for DeleteVpnGatewayResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DeleteVpnGatewayResponsePrivate object with public implementation \a q.
 */
DeleteVpnGatewayResponsePrivate::DeleteVpnGatewayResponsePrivate(
    DeleteVpnGatewayResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DeleteVpnGateway response element from \a xml.
 */
void DeleteVpnGatewayResponsePrivate::parseDeleteVpnGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVpnGatewayResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
