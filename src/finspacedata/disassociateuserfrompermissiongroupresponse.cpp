/*
    Copyright 2013-2021 Paul Colby

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
