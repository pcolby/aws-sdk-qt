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

#include "detachvpngatewayresponse.h"
#include "detachvpngatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DetachVpnGatewayResponse
 * \brief The DetachVpnGatewayResponse class provides an interace for EC2 DetachVpnGateway responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::detachVpnGateway
 */

/*!
 * Constructs a DetachVpnGatewayResponse object for \a reply to \a request, with parent \a parent.
 */
DetachVpnGatewayResponse::DetachVpnGatewayResponse(
        const DetachVpnGatewayRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DetachVpnGatewayResponsePrivate(this), parent)
{
    setRequest(new DetachVpnGatewayRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DetachVpnGatewayRequest * DetachVpnGatewayResponse::request() const
{
    Q_D(const DetachVpnGatewayResponse);
    return static_cast<const DetachVpnGatewayRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DetachVpnGateway \a response.
 */
void DetachVpnGatewayResponse::parseSuccess(QIODevice &response)
{
    Q_D(DetachVpnGatewayResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DetachVpnGatewayResponsePrivate
 * \brief The DetachVpnGatewayResponsePrivate class provides private implementation for DetachVpnGatewayResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DetachVpnGatewayResponsePrivate object with public implementation \a q.
 */
DetachVpnGatewayResponsePrivate::DetachVpnGatewayResponsePrivate(
    DetachVpnGatewayResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DetachVpnGateway response element from \a xml.
 */
void DetachVpnGatewayResponsePrivate::parseDetachVpnGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetachVpnGatewayResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
