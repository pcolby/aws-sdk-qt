// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
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
    //Q_D(AssociateRoleToGroupResponse);
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
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
