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

#include "deletevpcendpointconnectionnotificationsresponse.h"
#include "deletevpcendpointconnectionnotificationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DeleteVpcEndpointConnectionNotificationsResponse
 * \brief The DeleteVpcEndpointConnectionNotificationsResponse class provides an interace for EC2 DeleteVpcEndpointConnectionNotifications responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::deleteVpcEndpointConnectionNotifications
 */

/*!
 * Constructs a DeleteVpcEndpointConnectionNotificationsResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteVpcEndpointConnectionNotificationsResponse::DeleteVpcEndpointConnectionNotificationsResponse(
        const DeleteVpcEndpointConnectionNotificationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DeleteVpcEndpointConnectionNotificationsResponsePrivate(this), parent)
{
    setRequest(new DeleteVpcEndpointConnectionNotificationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteVpcEndpointConnectionNotificationsRequest * DeleteVpcEndpointConnectionNotificationsResponse::request() const
{
    Q_D(const DeleteVpcEndpointConnectionNotificationsResponse);
    return static_cast<const DeleteVpcEndpointConnectionNotificationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DeleteVpcEndpointConnectionNotifications \a response.
 */
void DeleteVpcEndpointConnectionNotificationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteVpcEndpointConnectionNotificationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DeleteVpcEndpointConnectionNotificationsResponsePrivate
 * \brief The DeleteVpcEndpointConnectionNotificationsResponsePrivate class provides private implementation for DeleteVpcEndpointConnectionNotificationsResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DeleteVpcEndpointConnectionNotificationsResponsePrivate object with public implementation \a q.
 */
DeleteVpcEndpointConnectionNotificationsResponsePrivate::DeleteVpcEndpointConnectionNotificationsResponsePrivate(
    DeleteVpcEndpointConnectionNotificationsResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DeleteVpcEndpointConnectionNotifications response element from \a xml.
 */
void DeleteVpcEndpointConnectionNotificationsResponsePrivate::parseDeleteVpcEndpointConnectionNotificationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVpcEndpointConnectionNotificationsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
