// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletegroupmembershipresponse.h"
#include "deletegroupmembershipresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DeleteGroupMembershipResponse
 * \brief The DeleteGroupMembershipResponse class provides an interace for QuickSight DeleteGroupMembership responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::deleteGroupMembership
 */

/*!
 * Constructs a DeleteGroupMembershipResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteGroupMembershipResponse::DeleteGroupMembershipResponse(
        const DeleteGroupMembershipRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DeleteGroupMembershipResponsePrivate(this), parent)
{
    setRequest(new DeleteGroupMembershipRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteGroupMembershipRequest * DeleteGroupMembershipResponse::request() const
{
    Q_D(const DeleteGroupMembershipResponse);
    return static_cast<const DeleteGroupMembershipRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight DeleteGroupMembership \a response.
 */
void DeleteGroupMembershipResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteGroupMembershipResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DeleteGroupMembershipResponsePrivate
 * \brief The DeleteGroupMembershipResponsePrivate class provides private implementation for DeleteGroupMembershipResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DeleteGroupMembershipResponsePrivate object with public implementation \a q.
 */
DeleteGroupMembershipResponsePrivate::DeleteGroupMembershipResponsePrivate(
    DeleteGroupMembershipResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DeleteGroupMembership response element from \a xml.
 */
void DeleteGroupMembershipResponsePrivate::parseDeleteGroupMembershipResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteGroupMembershipResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
