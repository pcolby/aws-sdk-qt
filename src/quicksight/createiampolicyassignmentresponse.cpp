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

#include "createiampolicyassignmentresponse.h"
#include "createiampolicyassignmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::CreateIAMPolicyAssignmentResponse
 * \brief The CreateIAMPolicyAssignmentResponse class provides an interace for QuickSight CreateIAMPolicyAssignment responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::createIAMPolicyAssignment
 */

/*!
 * Constructs a CreateIAMPolicyAssignmentResponse object for \a reply to \a request, with parent \a parent.
 */
CreateIAMPolicyAssignmentResponse::CreateIAMPolicyAssignmentResponse(
        const CreateIAMPolicyAssignmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new CreateIAMPolicyAssignmentResponsePrivate(this), parent)
{
    setRequest(new CreateIAMPolicyAssignmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateIAMPolicyAssignmentRequest * CreateIAMPolicyAssignmentResponse::request() const
{
    Q_D(const CreateIAMPolicyAssignmentResponse);
    return static_cast<const CreateIAMPolicyAssignmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight CreateIAMPolicyAssignment \a response.
 */
void CreateIAMPolicyAssignmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateIAMPolicyAssignmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::CreateIAMPolicyAssignmentResponsePrivate
 * \brief The CreateIAMPolicyAssignmentResponsePrivate class provides private implementation for CreateIAMPolicyAssignmentResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a CreateIAMPolicyAssignmentResponsePrivate object with public implementation \a q.
 */
CreateIAMPolicyAssignmentResponsePrivate::CreateIAMPolicyAssignmentResponsePrivate(
    CreateIAMPolicyAssignmentResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight CreateIAMPolicyAssignment response element from \a xml.
 */
void CreateIAMPolicyAssignmentResponsePrivate::parseCreateIAMPolicyAssignmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateIAMPolicyAssignmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
