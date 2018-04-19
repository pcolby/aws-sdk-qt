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

#include "modifyvpcendpointserviceconfigurationresponse.h"
#include "modifyvpcendpointserviceconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::ModifyVpcEndpointServiceConfigurationResponse
 * \brief The ModifyVpcEndpointServiceConfigurationResponse class provides an interace for EC2 ModifyVpcEndpointServiceConfiguration responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::modifyVpcEndpointServiceConfiguration
 */

/*!
 * Constructs a ModifyVpcEndpointServiceConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyVpcEndpointServiceConfigurationResponse::ModifyVpcEndpointServiceConfigurationResponse(
        const ModifyVpcEndpointServiceConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new ModifyVpcEndpointServiceConfigurationResponsePrivate(this), parent)
{
    setRequest(new ModifyVpcEndpointServiceConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyVpcEndpointServiceConfigurationRequest * ModifyVpcEndpointServiceConfigurationResponse::request() const
{
    Q_D(const ModifyVpcEndpointServiceConfigurationResponse);
    return static_cast<const ModifyVpcEndpointServiceConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 ModifyVpcEndpointServiceConfiguration \a response.
 */
void ModifyVpcEndpointServiceConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(ModifyVpcEndpointServiceConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::ModifyVpcEndpointServiceConfigurationResponsePrivate
 * \brief The ModifyVpcEndpointServiceConfigurationResponsePrivate class provides private implementation for ModifyVpcEndpointServiceConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a ModifyVpcEndpointServiceConfigurationResponsePrivate object with public implementation \a q.
 */
ModifyVpcEndpointServiceConfigurationResponsePrivate::ModifyVpcEndpointServiceConfigurationResponsePrivate(
    ModifyVpcEndpointServiceConfigurationResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 ModifyVpcEndpointServiceConfiguration response element from \a xml.
 */
void ModifyVpcEndpointServiceConfigurationResponsePrivate::parseModifyVpcEndpointServiceConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyVpcEndpointServiceConfigurationResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
