// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociateuserfrompermissiongroupresponse.h"
#include "disassociateuserfrompermissiongroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::DisassociateUserFromPermissionGroupResponse
 * \brief The DisassociateUserFromPermissionGroupResponse class provides an interace for FinspaceData DisassociateUserFromPermissionGroup responses.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::disassociateUserFromPermissionGroup
 */

/*!
 * Constructs a DisassociateUserFromPermissionGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateUserFromPermissionGroupResponse::DisassociateUserFromPermissionGroupResponse(
        const DisassociateUserFromPermissionGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FinspaceDataResponse(new DisassociateUserFromPermissionGroupResponsePrivate(this), parent)
{
    setRequest(new DisassociateUserFromPermissionGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateUserFromPermissionGroupRequest * DisassociateUserFromPermissionGroupResponse::request() const
{
    Q_D(const DisassociateUserFromPermissionGroupResponse);
    return static_cast<const DisassociateUserFromPermissionGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FinspaceData DisassociateUserFromPermissionGroup \a response.
 */
void DisassociateUserFromPermissionGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateUserFromPermissionGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FinspaceData::DisassociateUserFromPermissionGroupResponsePrivate
 * \brief The DisassociateUserFromPermissionGroupResponsePrivate class provides private implementation for DisassociateUserFromPermissionGroupResponse.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a DisassociateUserFromPermissionGroupResponsePrivate object with public implementation \a q.
 */
DisassociateUserFromPermissionGroupResponsePrivate::DisassociateUserFromPermissionGroupResponsePrivate(
    DisassociateUserFromPermissionGroupResponse * const q) : FinspaceDataResponsePrivate(q)
{

}

/*!
 * Parses a FinspaceData DisassociateUserFromPermissionGroup response element from \a xml.
 */
void DisassociateUserFromPermissionGroupResponsePrivate::parseDisassociateUserFromPermissionGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateUserFromPermissionGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FinspaceData
} // namespace QtAws
