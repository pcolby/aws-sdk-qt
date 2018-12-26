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

#include "createlagresponse.h"
#include "createlagresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::CreateLagResponse
 * \brief The CreateLagResponse class provides an interace for DirectConnect CreateLag responses.
 *
 * \inmodule QtAwsDirectConnect
 *
 *  AWS Direct Connect links your internal network to an AWS Direct Connect location over a standard Ethernet fiber-optic
 *  cable. One end of the cable is connected to your router, the other to an AWS Direct Connect router. With this connection
 *  in place, you can create virtual interfaces directly to the AWS cloud (for example, to Amazon EC2 and Amazon S3) and to
 *  Amazon VPC, bypassing Internet service providers in your network path. A connection provides access to all AWS Regions
 *  except the China (Beijing) and (China) Ningxia Regions. AWS resources in the China Regions can only be accessed through
 *  locations associated with those
 *
 * \sa DirectConnectClient::createLag
 */

/*!
 * Constructs a CreateLagResponse object for \a reply to \a request, with parent \a parent.
 */
CreateLagResponse::CreateLagResponse(
        const CreateLagRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new CreateLagResponsePrivate(this), parent)
{
    setRequest(new CreateLagRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateLagRequest * CreateLagResponse::request() const
{
    Q_D(const CreateLagResponse);
    return static_cast<const CreateLagRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect CreateLag \a response.
 */
void CreateLagResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateLagResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::CreateLagResponsePrivate
 * \brief The CreateLagResponsePrivate class provides private implementation for CreateLagResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a CreateLagResponsePrivate object with public implementation \a q.
 */
CreateLagResponsePrivate::CreateLagResponsePrivate(
    CreateLagResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect CreateLag response element from \a xml.
 */
void CreateLagResponsePrivate::parseCreateLagResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLagResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
