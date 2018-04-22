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

#include "modifyvpctenancyresponse.h"
#include "modifyvpctenancyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::ModifyVpcTenancyResponse
 * \brief The ModifyVpcTenancyResponse class provides an interace for EC2 ModifyVpcTenancy responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::modifyVpcTenancy
 */

/*!
 * Constructs a ModifyVpcTenancyResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyVpcTenancyResponse::ModifyVpcTenancyResponse(
        const ModifyVpcTenancyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new ModifyVpcTenancyResponsePrivate(this), parent)
{
    setRequest(new ModifyVpcTenancyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyVpcTenancyRequest * ModifyVpcTenancyResponse::request() const
{
    Q_D(const ModifyVpcTenancyResponse);
    return static_cast<const ModifyVpcTenancyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 ModifyVpcTenancy \a response.
 */
void ModifyVpcTenancyResponse::parseSuccess(QIODevice &response)
{
    Q_D(ModifyVpcTenancyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::ModifyVpcTenancyResponsePrivate
 * \brief The ModifyVpcTenancyResponsePrivate class provides private implementation for ModifyVpcTenancyResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a ModifyVpcTenancyResponsePrivate object with public implementation \a q.
 */
ModifyVpcTenancyResponsePrivate::ModifyVpcTenancyResponsePrivate(
    ModifyVpcTenancyResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 ModifyVpcTenancy response element from \a xml.
 */
void ModifyVpcTenancyResponsePrivate::parseModifyVpcTenancyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyVpcTenancyResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
