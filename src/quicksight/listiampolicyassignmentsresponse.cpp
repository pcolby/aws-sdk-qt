// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listiampolicyassignmentsresponse.h"
#include "listiampolicyassignmentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::ListIAMPolicyAssignmentsResponse
 * \brief The ListIAMPolicyAssignmentsResponse class provides an interace for QuickSight ListIAMPolicyAssignments responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::listIAMPolicyAssignments
 */

/*!
 * Constructs a ListIAMPolicyAssignmentsResponse object for \a reply to \a request, with parent \a parent.
 */
ListIAMPolicyAssignmentsResponse::ListIAMPolicyAssignmentsResponse(
        const ListIAMPolicyAssignmentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new ListIAMPolicyAssignmentsResponsePrivate(this), parent)
{
    setRequest(new ListIAMPolicyAssignmentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListIAMPolicyAssignmentsRequest * ListIAMPolicyAssignmentsResponse::request() const
{
    Q_D(const ListIAMPolicyAssignmentsResponse);
    return static_cast<const ListIAMPolicyAssignmentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight ListIAMPolicyAssignments \a response.
 */
void ListIAMPolicyAssignmentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListIAMPolicyAssignmentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::ListIAMPolicyAssignmentsResponsePrivate
 * \brief The ListIAMPolicyAssignmentsResponsePrivate class provides private implementation for ListIAMPolicyAssignmentsResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a ListIAMPolicyAssignmentsResponsePrivate object with public implementation \a q.
 */
ListIAMPolicyAssignmentsResponsePrivate::ListIAMPolicyAssignmentsResponsePrivate(
    ListIAMPolicyAssignmentsResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight ListIAMPolicyAssignments response element from \a xml.
 */
void ListIAMPolicyAssignmentsResponsePrivate::parseListIAMPolicyAssignmentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListIAMPolicyAssignmentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
