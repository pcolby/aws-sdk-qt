// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listiampolicyassignmentsforuserresponse.h"
#include "listiampolicyassignmentsforuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::ListIAMPolicyAssignmentsForUserResponse
 * \brief The ListIAMPolicyAssignmentsForUserResponse class provides an interace for QuickSight ListIAMPolicyAssignmentsForUser responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::listIAMPolicyAssignmentsForUser
 */

/*!
 * Constructs a ListIAMPolicyAssignmentsForUserResponse object for \a reply to \a request, with parent \a parent.
 */
ListIAMPolicyAssignmentsForUserResponse::ListIAMPolicyAssignmentsForUserResponse(
        const ListIAMPolicyAssignmentsForUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new ListIAMPolicyAssignmentsForUserResponsePrivate(this), parent)
{
    setRequest(new ListIAMPolicyAssignmentsForUserRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListIAMPolicyAssignmentsForUserRequest * ListIAMPolicyAssignmentsForUserResponse::request() const
{
    Q_D(const ListIAMPolicyAssignmentsForUserResponse);
    return static_cast<const ListIAMPolicyAssignmentsForUserRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight ListIAMPolicyAssignmentsForUser \a response.
 */
void ListIAMPolicyAssignmentsForUserResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListIAMPolicyAssignmentsForUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::ListIAMPolicyAssignmentsForUserResponsePrivate
 * \brief The ListIAMPolicyAssignmentsForUserResponsePrivate class provides private implementation for ListIAMPolicyAssignmentsForUserResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a ListIAMPolicyAssignmentsForUserResponsePrivate object with public implementation \a q.
 */
ListIAMPolicyAssignmentsForUserResponsePrivate::ListIAMPolicyAssignmentsForUserResponsePrivate(
    ListIAMPolicyAssignmentsForUserResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight ListIAMPolicyAssignmentsForUser response element from \a xml.
 */
void ListIAMPolicyAssignmentsForUserResponsePrivate::parseListIAMPolicyAssignmentsForUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListIAMPolicyAssignmentsForUserResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
