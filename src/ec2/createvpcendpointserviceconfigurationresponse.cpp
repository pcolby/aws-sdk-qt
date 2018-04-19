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

#include "createvpcendpointserviceconfigurationresponse.h"
#include "createvpcendpointserviceconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::CreateVpcEndpointServiceConfigurationResponse
 * \brief The CreateVpcEndpointServiceConfigurationResponse class provides an interace for EC2 CreateVpcEndpointServiceConfiguration responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::createVpcEndpointServiceConfiguration
 */

/*!
 * Constructs a CreateVpcEndpointServiceConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateVpcEndpointServiceConfigurationResponse::CreateVpcEndpointServiceConfigurationResponse(
        const CreateVpcEndpointServiceConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new CreateVpcEndpointServiceConfigurationResponsePrivate(this), parent)
{
    setRequest(new CreateVpcEndpointServiceConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateVpcEndpointServiceConfigurationRequest * CreateVpcEndpointServiceConfigurationResponse::request() const
{
    Q_D(const CreateVpcEndpointServiceConfigurationResponse);
    return static_cast<const CreateVpcEndpointServiceConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 CreateVpcEndpointServiceConfiguration \a response.
 */
void CreateVpcEndpointServiceConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateVpcEndpointServiceConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::CreateVpcEndpointServiceConfigurationResponsePrivate
 * \brief The CreateVpcEndpointServiceConfigurationResponsePrivate class provides private implementation for CreateVpcEndpointServiceConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a CreateVpcEndpointServiceConfigurationResponsePrivate object with public implementation \a q.
 */
CreateVpcEndpointServiceConfigurationResponsePrivate::CreateVpcEndpointServiceConfigurationResponsePrivate(
    CreateVpcEndpointServiceConfigurationResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 CreateVpcEndpointServiceConfiguration response element from \a xml.
 */
void CreateVpcEndpointServiceConfigurationResponsePrivate::parseCreateVpcEndpointServiceConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateVpcEndpointServiceConfigurationResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
