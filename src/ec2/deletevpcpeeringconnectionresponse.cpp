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

#include "deletevpcpeeringconnectionresponse.h"
#include "deletevpcpeeringconnectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DeleteVpcPeeringConnectionResponse
 * \brief The DeleteVpcPeeringConnectionResponse class provides an interace for EC2 DeleteVpcPeeringConnection responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::deleteVpcPeeringConnection
 */

/*!
 * Constructs a DeleteVpcPeeringConnectionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteVpcPeeringConnectionResponse::DeleteVpcPeeringConnectionResponse(
        const DeleteVpcPeeringConnectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DeleteVpcPeeringConnectionResponsePrivate(this), parent)
{
    setRequest(new DeleteVpcPeeringConnectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteVpcPeeringConnectionRequest * DeleteVpcPeeringConnectionResponse::request() const
{
    Q_D(const DeleteVpcPeeringConnectionResponse);
    return static_cast<const DeleteVpcPeeringConnectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DeleteVpcPeeringConnection \a response.
 */
void DeleteVpcPeeringConnectionResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteVpcPeeringConnectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DeleteVpcPeeringConnectionResponsePrivate
 * \brief The DeleteVpcPeeringConnectionResponsePrivate class provides private implementation for DeleteVpcPeeringConnectionResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DeleteVpcPeeringConnectionResponsePrivate object with public implementation \a q.
 */
DeleteVpcPeeringConnectionResponsePrivate::DeleteVpcPeeringConnectionResponsePrivate(
    DeleteVpcPeeringConnectionResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DeleteVpcPeeringConnection response element from \a xml.
 */
void DeleteVpcPeeringConnectionResponsePrivate::parseDeleteVpcPeeringConnectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVpcPeeringConnectionResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
