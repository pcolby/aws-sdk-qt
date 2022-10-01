// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
