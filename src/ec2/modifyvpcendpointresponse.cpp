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

#include "modifyvpcendpointresponse.h"
#include "modifyvpcendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::ModifyVpcEndpointResponse
 * \brief The ModifyVpcEndpointResponse class provides an interace for EC2 ModifyVpcEndpoint responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::modifyVpcEndpoint
 */

/*!
 * Constructs a ModifyVpcEndpointResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyVpcEndpointResponse::ModifyVpcEndpointResponse(
        const ModifyVpcEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new ModifyVpcEndpointResponsePrivate(this), parent)
{
    setRequest(new ModifyVpcEndpointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyVpcEndpointRequest * ModifyVpcEndpointResponse::request() const
{
    Q_D(const ModifyVpcEndpointResponse);
    return static_cast<const ModifyVpcEndpointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 ModifyVpcEndpoint \a response.
 */
void ModifyVpcEndpointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyVpcEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::ModifyVpcEndpointResponsePrivate
 * \brief The ModifyVpcEndpointResponsePrivate class provides private implementation for ModifyVpcEndpointResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a ModifyVpcEndpointResponsePrivate object with public implementation \a q.
 */
ModifyVpcEndpointResponsePrivate::ModifyVpcEndpointResponsePrivate(
    ModifyVpcEndpointResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 ModifyVpcEndpoint response element from \a xml.
 */
void ModifyVpcEndpointResponsePrivate::parseModifyVpcEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyVpcEndpointResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
