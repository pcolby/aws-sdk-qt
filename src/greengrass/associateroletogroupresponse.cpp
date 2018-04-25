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

#include "associateroletogroupresponse.h"
#include "associateroletogroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::AssociateRoleToGroupResponse
 * \brief The AssociateRoleToGroupResponse class provides an interace for Greengrass AssociateRoleToGroup responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::associateRoleToGroup
 */

/*!
 * Constructs a AssociateRoleToGroupResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateRoleToGroupResponse::AssociateRoleToGroupResponse(
        const AssociateRoleToGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new AssociateRoleToGroupResponsePrivate(this), parent)
{
    setRequest(new AssociateRoleToGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateRoleToGroupRequest * AssociateRoleToGroupResponse::request() const
{
    Q_D(const AssociateRoleToGroupResponse);
    return static_cast<const AssociateRoleToGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass AssociateRoleToGroup \a response.
 */
void AssociateRoleToGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(AssociateRoleToGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::AssociateRoleToGroupResponsePrivate
 * \brief The AssociateRoleToGroupResponsePrivate class provides private implementation for AssociateRoleToGroupResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a AssociateRoleToGroupResponsePrivate object with public implementation \a q.
 */
AssociateRoleToGroupResponsePrivate::AssociateRoleToGroupResponsePrivate(
    AssociateRoleToGroupResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass AssociateRoleToGroup response element from \a xml.
 */
void AssociateRoleToGroupResponsePrivate::parseAssociateRoleToGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateRoleToGroupResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
