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

#include "revokesecuritygroupegressresponse.h"
#include "revokesecuritygroupegressresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::RevokeSecurityGroupEgressResponse
 * \brief The RevokeSecurityGroupEgressResponse class provides an interace for EC2 RevokeSecurityGroupEgress responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::revokeSecurityGroupEgress
 */

/*!
 * Constructs a RevokeSecurityGroupEgressResponse object for \a reply to \a request, with parent \a parent.
 */
RevokeSecurityGroupEgressResponse::RevokeSecurityGroupEgressResponse(
        const RevokeSecurityGroupEgressRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new RevokeSecurityGroupEgressResponsePrivate(this), parent)
{
    setRequest(new RevokeSecurityGroupEgressRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RevokeSecurityGroupEgressRequest * RevokeSecurityGroupEgressResponse::request() const
{
    Q_D(const RevokeSecurityGroupEgressResponse);
    return static_cast<const RevokeSecurityGroupEgressRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 RevokeSecurityGroupEgress \a response.
 */
void RevokeSecurityGroupEgressResponse::parseSuccess(QIODevice &response)
{
    Q_D(RevokeSecurityGroupEgressResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::RevokeSecurityGroupEgressResponsePrivate
 * \brief The RevokeSecurityGroupEgressResponsePrivate class provides private implementation for RevokeSecurityGroupEgressResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a RevokeSecurityGroupEgressResponsePrivate object with public implementation \a q.
 */
RevokeSecurityGroupEgressResponsePrivate::RevokeSecurityGroupEgressResponsePrivate(
    RevokeSecurityGroupEgressResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 RevokeSecurityGroupEgress response element from \a xml.
 */
void RevokeSecurityGroupEgressResponsePrivate::parseRevokeSecurityGroupEgressResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RevokeSecurityGroupEgressResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
