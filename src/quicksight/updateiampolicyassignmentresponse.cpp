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

#include "updateiampolicyassignmentresponse.h"
#include "updateiampolicyassignmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateIAMPolicyAssignmentResponse
 * \brief The UpdateIAMPolicyAssignmentResponse class provides an interace for QuickSight UpdateIAMPolicyAssignment responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateIAMPolicyAssignment
 */

/*!
 * Constructs a UpdateIAMPolicyAssignmentResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateIAMPolicyAssignmentResponse::UpdateIAMPolicyAssignmentResponse(
        const UpdateIAMPolicyAssignmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new UpdateIAMPolicyAssignmentResponsePrivate(this), parent)
{
    setRequest(new UpdateIAMPolicyAssignmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateIAMPolicyAssignmentRequest * UpdateIAMPolicyAssignmentResponse::request() const
{
    Q_D(const UpdateIAMPolicyAssignmentResponse);
    return static_cast<const UpdateIAMPolicyAssignmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight UpdateIAMPolicyAssignment \a response.
 */
void UpdateIAMPolicyAssignmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateIAMPolicyAssignmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::UpdateIAMPolicyAssignmentResponsePrivate
 * \brief The UpdateIAMPolicyAssignmentResponsePrivate class provides private implementation for UpdateIAMPolicyAssignmentResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateIAMPolicyAssignmentResponsePrivate object with public implementation \a q.
 */
UpdateIAMPolicyAssignmentResponsePrivate::UpdateIAMPolicyAssignmentResponsePrivate(
    UpdateIAMPolicyAssignmentResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight UpdateIAMPolicyAssignment response element from \a xml.
 */
void UpdateIAMPolicyAssignmentResponsePrivate::parseUpdateIAMPolicyAssignmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateIAMPolicyAssignmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
