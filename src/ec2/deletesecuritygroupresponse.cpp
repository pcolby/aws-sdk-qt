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

#include "deletesecuritygroupresponse.h"
#include "deletesecuritygroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DeleteSecurityGroupResponse
 * \brief The DeleteSecurityGroupResponse class provides an interace for EC2 DeleteSecurityGroup responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::deleteSecurityGroup
 */

/*!
 * Constructs a DeleteSecurityGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSecurityGroupResponse::DeleteSecurityGroupResponse(
        const DeleteSecurityGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DeleteSecurityGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteSecurityGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSecurityGroupRequest * DeleteSecurityGroupResponse::request() const
{
    Q_D(const DeleteSecurityGroupResponse);
    return static_cast<const DeleteSecurityGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DeleteSecurityGroup \a response.
 */
void DeleteSecurityGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSecurityGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DeleteSecurityGroupResponsePrivate
 * \brief The DeleteSecurityGroupResponsePrivate class provides private implementation for DeleteSecurityGroupResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DeleteSecurityGroupResponsePrivate object with public implementation \a q.
 */
DeleteSecurityGroupResponsePrivate::DeleteSecurityGroupResponsePrivate(
    DeleteSecurityGroupResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DeleteSecurityGroup response element from \a xml.
 */
void DeleteSecurityGroupResponsePrivate::parseDeleteSecurityGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSecurityGroupResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
