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

#include "deletefoldermembershipresponse.h"
#include "deletefoldermembershipresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DeleteFolderMembershipResponse
 * \brief The DeleteFolderMembershipResponse class provides an interace for QuickSight DeleteFolderMembership responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::deleteFolderMembership
 */

/*!
 * Constructs a DeleteFolderMembershipResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteFolderMembershipResponse::DeleteFolderMembershipResponse(
        const DeleteFolderMembershipRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DeleteFolderMembershipResponsePrivate(this), parent)
{
    setRequest(new DeleteFolderMembershipRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteFolderMembershipRequest * DeleteFolderMembershipResponse::request() const
{
    Q_D(const DeleteFolderMembershipResponse);
    return static_cast<const DeleteFolderMembershipRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight DeleteFolderMembership \a response.
 */
void DeleteFolderMembershipResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteFolderMembershipResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DeleteFolderMembershipResponsePrivate
 * \brief The DeleteFolderMembershipResponsePrivate class provides private implementation for DeleteFolderMembershipResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DeleteFolderMembershipResponsePrivate object with public implementation \a q.
 */
DeleteFolderMembershipResponsePrivate::DeleteFolderMembershipResponsePrivate(
    DeleteFolderMembershipResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DeleteFolderMembership response element from \a xml.
 */
void DeleteFolderMembershipResponsePrivate::parseDeleteFolderMembershipResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFolderMembershipResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
