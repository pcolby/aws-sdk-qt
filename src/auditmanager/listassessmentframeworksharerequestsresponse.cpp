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

#include "listassessmentframeworksharerequestsresponse.h"
#include "listassessmentframeworksharerequestsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AuditManager {

/*!
 * \class QtAws::AuditManager::ListAssessmentFrameworkShareRequestsResponse
 * \brief The ListAssessmentFrameworkShareRequestsResponse class provides an interace for AuditManager ListAssessmentFrameworkShareRequests responses.
 *
 * \inmodule QtAwsAuditManager
 *
 *  Welcome to the Audit Manager API reference. This guide is for developers who need detailed information about the Audit
 *  Manager API operations, data types, and errors.
 * 
 *  </p
 * 
 *  Audit Manager is a service that provides automated evidence collection so that you can continually audit your Amazon Web
 *  Services usage. You can use it to assess the effectiveness of your controls, manage risk, and simplify
 * 
 *  compliance>
 * 
 *  Audit Manager provides prebuilt frameworks that structure and automate assessments for a given compliance standard.
 *  Frameworks include a prebuilt collection of controls with descriptions and testing procedures. These controls are
 *  grouped according to the requirements of the specified compliance standard or regulation. You can also customize
 *  frameworks and controls to support internal audits with specific requirements.
 * 
 *  </p
 * 
 *  Use the following links to get started with the Audit Manager
 * 
 *  API> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_Operations.html">Actions</a>: An alphabetical
 *  list of all Audit Manager API
 * 
 *  operations> </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_Types.html">Data types</a>: An alphabetical
 *  list of all Audit Manager data
 * 
 *  types> </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/CommonParameters.html">Common parameters</a>:
 *  Parameters that all Query operations can
 * 
 *  use> </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/CommonErrors.html">Common errors</a>: Client and
 *  server errors that all operations can
 * 
 *  return> </li> </ul>
 * 
 *  If you're new to Audit Manager, we recommend that you review the <a
 *  href="https://docs.aws.amazon.com/audit-manager/latest/userguide/what-is.html"> Audit Manager User
 *
 * \sa AuditManagerClient::listAssessmentFrameworkShareRequests
 */

/*!
 * Constructs a ListAssessmentFrameworkShareRequestsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAssessmentFrameworkShareRequestsResponse::ListAssessmentFrameworkShareRequestsResponse(
        const ListAssessmentFrameworkShareRequestsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AuditManagerResponse(new ListAssessmentFrameworkShareRequestsResponsePrivate(this), parent)
{
    setRequest(new ListAssessmentFrameworkShareRequestsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAssessmentFrameworkShareRequestsRequest * ListAssessmentFrameworkShareRequestsResponse::request() const
{
    Q_D(const ListAssessmentFrameworkShareRequestsResponse);
    return static_cast<const ListAssessmentFrameworkShareRequestsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AuditManager ListAssessmentFrameworkShareRequests \a response.
 */
void ListAssessmentFrameworkShareRequestsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAssessmentFrameworkShareRequestsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AuditManager::ListAssessmentFrameworkShareRequestsResponsePrivate
 * \brief The ListAssessmentFrameworkShareRequestsResponsePrivate class provides private implementation for ListAssessmentFrameworkShareRequestsResponse.
 * \internal
 *
 * \inmodule QtAwsAuditManager
 */

/*!
 * Constructs a ListAssessmentFrameworkShareRequestsResponsePrivate object with public implementation \a q.
 */
ListAssessmentFrameworkShareRequestsResponsePrivate::ListAssessmentFrameworkShareRequestsResponsePrivate(
    ListAssessmentFrameworkShareRequestsResponse * const q) : AuditManagerResponsePrivate(q)
{

}

/*!
 * Parses a AuditManager ListAssessmentFrameworkShareRequests response element from \a xml.
 */
void ListAssessmentFrameworkShareRequestsResponsePrivate::parseListAssessmentFrameworkShareRequestsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAssessmentFrameworkShareRequestsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AuditManager
} // namespace QtAws
