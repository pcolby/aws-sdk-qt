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

#include "associatesubnetcidrblockresponse.h"
#include "associatesubnetcidrblockresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::AssociateSubnetCidrBlockResponse
 * \brief The AssociateSubnetCidrBlockResponse class provides an interace for EC2 AssociateSubnetCidrBlock responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::associateSubnetCidrBlock
 */

/*!
 * Constructs a AssociateSubnetCidrBlockResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateSubnetCidrBlockResponse::AssociateSubnetCidrBlockResponse(
        const AssociateSubnetCidrBlockRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new AssociateSubnetCidrBlockResponsePrivate(this), parent)
{
    setRequest(new AssociateSubnetCidrBlockRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateSubnetCidrBlockRequest * AssociateSubnetCidrBlockResponse::request() const
{
    Q_D(const AssociateSubnetCidrBlockResponse);
    return static_cast<const AssociateSubnetCidrBlockRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 AssociateSubnetCidrBlock \a response.
 */
void AssociateSubnetCidrBlockResponse::parseSuccess(QIODevice &response)
{
    Q_D(AssociateSubnetCidrBlockResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::AssociateSubnetCidrBlockResponsePrivate
 * \brief The AssociateSubnetCidrBlockResponsePrivate class provides private implementation for AssociateSubnetCidrBlockResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a AssociateSubnetCidrBlockResponsePrivate object with public implementation \a q.
 */
AssociateSubnetCidrBlockResponsePrivate::AssociateSubnetCidrBlockResponsePrivate(
    AssociateSubnetCidrBlockResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 AssociateSubnetCidrBlock response element from \a xml.
 */
void AssociateSubnetCidrBlockResponsePrivate::parseAssociateSubnetCidrBlockResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateSubnetCidrBlockResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
