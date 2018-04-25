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

#include "deletevpcendpointsresponse.h"
#include "deletevpcendpointsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DeleteVpcEndpointsResponse
 * \brief The DeleteVpcEndpointsResponse class provides an interace for EC2 DeleteVpcEndpoints responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::deleteVpcEndpoints
 */

/*!
 * Constructs a DeleteVpcEndpointsResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteVpcEndpointsResponse::DeleteVpcEndpointsResponse(
        const DeleteVpcEndpointsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DeleteVpcEndpointsResponsePrivate(this), parent)
{
    setRequest(new DeleteVpcEndpointsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteVpcEndpointsRequest * DeleteVpcEndpointsResponse::request() const
{
    Q_D(const DeleteVpcEndpointsResponse);
    return static_cast<const DeleteVpcEndpointsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DeleteVpcEndpoints \a response.
 */
void DeleteVpcEndpointsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteVpcEndpointsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DeleteVpcEndpointsResponsePrivate
 * \brief The DeleteVpcEndpointsResponsePrivate class provides private implementation for DeleteVpcEndpointsResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DeleteVpcEndpointsResponsePrivate object with public implementation \a q.
 */
DeleteVpcEndpointsResponsePrivate::DeleteVpcEndpointsResponsePrivate(
    DeleteVpcEndpointsResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DeleteVpcEndpoints response element from \a xml.
 */
void DeleteVpcEndpointsResponsePrivate::parseDeleteVpcEndpointsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVpcEndpointsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
