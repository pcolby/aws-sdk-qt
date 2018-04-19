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

#include "moveaddresstovpcresponse.h"
#include "moveaddresstovpcresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::MoveAddressToVpcResponse
 * \brief The MoveAddressToVpcResponse class provides an interace for EC2 MoveAddressToVpc responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::moveAddressToVpc
 */

/*!
 * Constructs a MoveAddressToVpcResponse object for \a reply to \a request, with parent \a parent.
 */
MoveAddressToVpcResponse::MoveAddressToVpcResponse(
        const MoveAddressToVpcRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new MoveAddressToVpcResponsePrivate(this), parent)
{
    setRequest(new MoveAddressToVpcRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const MoveAddressToVpcRequest * MoveAddressToVpcResponse::request() const
{
    Q_D(const MoveAddressToVpcResponse);
    return static_cast<const MoveAddressToVpcRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 MoveAddressToVpc \a response.
 */
void MoveAddressToVpcResponse::parseSuccess(QIODevice &response)
{
    Q_D(MoveAddressToVpcResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::MoveAddressToVpcResponsePrivate
 * \brief The MoveAddressToVpcResponsePrivate class provides private implementation for MoveAddressToVpcResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a MoveAddressToVpcResponsePrivate object with public implementation \a q.
 */
MoveAddressToVpcResponsePrivate::MoveAddressToVpcResponsePrivate(
    MoveAddressToVpcResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 MoveAddressToVpc response element from \a xml.
 */
void MoveAddressToVpcResponsePrivate::parseMoveAddressToVpcResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("MoveAddressToVpcResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
