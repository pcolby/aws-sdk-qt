// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associateusertopermissiongroupresponse.h"
#include "associateusertopermissiongroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::AssociateUserToPermissionGroupResponse
 * \brief The AssociateUserToPermissionGroupResponse class provides an interace for FinspaceData AssociateUserToPermissionGroup responses.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::associateUserToPermissionGroup
 */

/*!
 * Constructs a AssociateUserToPermissionGroupResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateUserToPermissionGroupResponse::AssociateUserToPermissionGroupResponse(
        const AssociateUserToPermissionGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FinspaceDataResponse(new AssociateUserToPermissionGroupResponsePrivate(this), parent)
{
    setRequest(new AssociateUserToPermissionGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateUserToPermissionGroupRequest * AssociateUserToPermissionGroupResponse::request() const
{
    Q_D(const AssociateUserToPermissionGroupResponse);
    return static_cast<const AssociateUserToPermissionGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FinspaceData AssociateUserToPermissionGroup \a response.
 */
void AssociateUserToPermissionGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateUserToPermissionGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FinspaceData::AssociateUserToPermissionGroupResponsePrivate
 * \brief The AssociateUserToPermissionGroupResponsePrivate class provides private implementation for AssociateUserToPermissionGroupResponse.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a AssociateUserToPermissionGroupResponsePrivate object with public implementation \a q.
 */
AssociateUserToPermissionGroupResponsePrivate::AssociateUserToPermissionGroupResponsePrivate(
    AssociateUserToPermissionGroupResponse * const q) : FinspaceDataResponsePrivate(q)
{

}

/*!
 * Parses a FinspaceData AssociateUserToPermissionGroup response element from \a xml.
 */
void AssociateUserToPermissionGroupResponsePrivate::parseAssociateUserToPermissionGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateUserToPermissionGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FinspaceData
} // namespace QtAws
