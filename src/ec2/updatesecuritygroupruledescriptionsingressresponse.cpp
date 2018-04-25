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

#include "updatesecuritygroupruledescriptionsingressresponse.h"
#include "updatesecuritygroupruledescriptionsingressresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::UpdateSecurityGroupRuleDescriptionsIngressResponse
 * \brief The UpdateSecurityGroupRuleDescriptionsIngressResponse class provides an interace for EC2 UpdateSecurityGroupRuleDescriptionsIngress responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::updateSecurityGroupRuleDescriptionsIngress
 */

/*!
 * Constructs a UpdateSecurityGroupRuleDescriptionsIngressResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateSecurityGroupRuleDescriptionsIngressResponse::UpdateSecurityGroupRuleDescriptionsIngressResponse(
        const UpdateSecurityGroupRuleDescriptionsIngressRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new UpdateSecurityGroupRuleDescriptionsIngressResponsePrivate(this), parent)
{
    setRequest(new UpdateSecurityGroupRuleDescriptionsIngressRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateSecurityGroupRuleDescriptionsIngressRequest * UpdateSecurityGroupRuleDescriptionsIngressResponse::request() const
{
    Q_D(const UpdateSecurityGroupRuleDescriptionsIngressResponse);
    return static_cast<const UpdateSecurityGroupRuleDescriptionsIngressRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 UpdateSecurityGroupRuleDescriptionsIngress \a response.
 */
void UpdateSecurityGroupRuleDescriptionsIngressResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateSecurityGroupRuleDescriptionsIngressResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::UpdateSecurityGroupRuleDescriptionsIngressResponsePrivate
 * \brief The UpdateSecurityGroupRuleDescriptionsIngressResponsePrivate class provides private implementation for UpdateSecurityGroupRuleDescriptionsIngressResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a UpdateSecurityGroupRuleDescriptionsIngressResponsePrivate object with public implementation \a q.
 */
UpdateSecurityGroupRuleDescriptionsIngressResponsePrivate::UpdateSecurityGroupRuleDescriptionsIngressResponsePrivate(
    UpdateSecurityGroupRuleDescriptionsIngressResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 UpdateSecurityGroupRuleDescriptionsIngress response element from \a xml.
 */
void UpdateSecurityGroupRuleDescriptionsIngressResponsePrivate::parseUpdateSecurityGroupRuleDescriptionsIngressResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSecurityGroupRuleDescriptionsIngressResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
