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

#include "createsecuritygroupresponse.h"
#include "createsecuritygroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::CreateSecurityGroupResponse
 * \brief The CreateSecurityGroupResponse class provides an interace for EC2 CreateSecurityGroup responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::createSecurityGroup
 */

/*!
 * Constructs a CreateSecurityGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSecurityGroupResponse::CreateSecurityGroupResponse(
        const CreateSecurityGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new CreateSecurityGroupResponsePrivate(this), parent)
{
    setRequest(new CreateSecurityGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSecurityGroupRequest * CreateSecurityGroupResponse::request() const
{
    Q_D(const CreateSecurityGroupResponse);
    return static_cast<const CreateSecurityGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 CreateSecurityGroup \a response.
 */
void CreateSecurityGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSecurityGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::CreateSecurityGroupResponsePrivate
 * \brief The CreateSecurityGroupResponsePrivate class provides private implementation for CreateSecurityGroupResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a CreateSecurityGroupResponsePrivate object with public implementation \a q.
 */
CreateSecurityGroupResponsePrivate::CreateSecurityGroupResponsePrivate(
    CreateSecurityGroupResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 CreateSecurityGroup response element from \a xml.
 */
void CreateSecurityGroupResponsePrivate::parseCreateSecurityGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSecurityGroupResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
