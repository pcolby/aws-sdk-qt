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

#include "createnetworkinterfaceresponse.h"
#include "createnetworkinterfaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::CreateNetworkInterfaceResponse
 * \brief The CreateNetworkInterfaceResponse class provides an interace for EC2 CreateNetworkInterface responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::createNetworkInterface
 */

/*!
 * Constructs a CreateNetworkInterfaceResponse object for \a reply to \a request, with parent \a parent.
 */
CreateNetworkInterfaceResponse::CreateNetworkInterfaceResponse(
        const CreateNetworkInterfaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new CreateNetworkInterfaceResponsePrivate(this), parent)
{
    setRequest(new CreateNetworkInterfaceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateNetworkInterfaceRequest * CreateNetworkInterfaceResponse::request() const
{
    Q_D(const CreateNetworkInterfaceResponse);
    return static_cast<const CreateNetworkInterfaceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 CreateNetworkInterface \a response.
 */
void CreateNetworkInterfaceResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateNetworkInterfaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::CreateNetworkInterfaceResponsePrivate
 * \brief The CreateNetworkInterfaceResponsePrivate class provides private implementation for CreateNetworkInterfaceResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a CreateNetworkInterfaceResponsePrivate object with public implementation \a q.
 */
CreateNetworkInterfaceResponsePrivate::CreateNetworkInterfaceResponsePrivate(
    CreateNetworkInterfaceResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 CreateNetworkInterface response element from \a xml.
 */
void CreateNetworkInterfaceResponsePrivate::parseCreateNetworkInterfaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateNetworkInterfaceResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
