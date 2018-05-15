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

#include "disassociatevpccidrblockresponse.h"
#include "disassociatevpccidrblockresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DisassociateVpcCidrBlockResponse
 * \brief The DisassociateVpcCidrBlockResponse class provides an interace for EC2 DisassociateVpcCidrBlock responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::disassociateVpcCidrBlock
 */

/*!
 * Constructs a DisassociateVpcCidrBlockResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateVpcCidrBlockResponse::DisassociateVpcCidrBlockResponse(
        const DisassociateVpcCidrBlockRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DisassociateVpcCidrBlockResponsePrivate(this), parent)
{
    setRequest(new DisassociateVpcCidrBlockRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateVpcCidrBlockRequest * DisassociateVpcCidrBlockResponse::request() const
{
    Q_D(const DisassociateVpcCidrBlockResponse);
    return static_cast<const DisassociateVpcCidrBlockRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DisassociateVpcCidrBlock \a response.
 */
void DisassociateVpcCidrBlockResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateVpcCidrBlockResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DisassociateVpcCidrBlockResponsePrivate
 * \brief The DisassociateVpcCidrBlockResponsePrivate class provides private implementation for DisassociateVpcCidrBlockResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DisassociateVpcCidrBlockResponsePrivate object with public implementation \a q.
 */
DisassociateVpcCidrBlockResponsePrivate::DisassociateVpcCidrBlockResponsePrivate(
    DisassociateVpcCidrBlockResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DisassociateVpcCidrBlock response element from \a xml.
 */
void DisassociateVpcCidrBlockResponsePrivate::parseDisassociateVpcCidrBlockResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateVpcCidrBlockResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
