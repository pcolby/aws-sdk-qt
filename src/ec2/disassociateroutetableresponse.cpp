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

#include "disassociateroutetableresponse.h"
#include "disassociateroutetableresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DisassociateRouteTableResponse
 * \brief The DisassociateRouteTableResponse class provides an interace for EC2 DisassociateRouteTable responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::disassociateRouteTable
 */

/*!
 * Constructs a DisassociateRouteTableResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateRouteTableResponse::DisassociateRouteTableResponse(
        const DisassociateRouteTableRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DisassociateRouteTableResponsePrivate(this), parent)
{
    setRequest(new DisassociateRouteTableRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateRouteTableRequest * DisassociateRouteTableResponse::request() const
{
    Q_D(const DisassociateRouteTableResponse);
    return static_cast<const DisassociateRouteTableRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DisassociateRouteTable \a response.
 */
void DisassociateRouteTableResponse::parseSuccess(QIODevice &response)
{
    Q_D(DisassociateRouteTableResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DisassociateRouteTableResponsePrivate
 * \brief The DisassociateRouteTableResponsePrivate class provides private implementation for DisassociateRouteTableResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DisassociateRouteTableResponsePrivate object with public implementation \a q.
 */
DisassociateRouteTableResponsePrivate::DisassociateRouteTableResponsePrivate(
    DisassociateRouteTableResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DisassociateRouteTable response element from \a xml.
 */
void DisassociateRouteTableResponsePrivate::parseDisassociateRouteTableResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateRouteTableResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
