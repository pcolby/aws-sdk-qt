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

#include "deletelagresponse.h"
#include "deletelagresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DeleteLagResponse
 * \brief The DeleteLagResponse class provides an interace for DirectConnect DeleteLag responses.
 *
 * \inmodule QtAwsDirectConnect
 *
 *  AWS Direct Connect links your internal network to an AWS Direct Connect location over a standard 1 gigabit or 10 gigabit
 *  Ethernet fiber-optic cable. One end of the cable is connected to your router, the other to an AWS Direct Connect router.
 *  With this connection in place, you can create virtual interfaces directly to the AWS cloud (for example, to Amazon
 *  Elastic Compute Cloud (Amazon EC2) and Amazon Simple Storage Service (Amazon S3)) and to Amazon Virtual Private Cloud
 *  (Amazon VPC), bypassing Internet service providers in your network path. An AWS Direct Connect location provides access
 *  to AWS in the region it is associated with, as well as access to other US regions. For example, you can provision a
 *  single connection to any AWS Direct Connect location in the US and use it to access public AWS services in all US
 *  Regions and AWS GovCloud
 *
 * \sa DirectConnectClient::deleteLag
 */

/*!
 * Constructs a DeleteLagResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteLagResponse::DeleteLagResponse(
        const DeleteLagRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new DeleteLagResponsePrivate(this), parent)
{
    setRequest(new DeleteLagRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteLagRequest * DeleteLagResponse::request() const
{
    Q_D(const DeleteLagResponse);
    return static_cast<const DeleteLagRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect DeleteLag \a response.
 */
void DeleteLagResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteLagResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::DeleteLagResponsePrivate
 * \brief The DeleteLagResponsePrivate class provides private implementation for DeleteLagResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DeleteLagResponsePrivate object with public implementation \a q.
 */
DeleteLagResponsePrivate::DeleteLagResponsePrivate(
    DeleteLagResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect DeleteLag response element from \a xml.
 */
void DeleteLagResponsePrivate::parseDeleteLagResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLagResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
