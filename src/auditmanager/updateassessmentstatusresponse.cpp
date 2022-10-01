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

#include "updateassessmentstatusresponse.h"
#include "updateassessmentstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AuditManager {

/*!
 * \class QtAws::AuditManager::UpdateAssessmentStatusResponse
 * \brief The UpdateAssessmentStatusResponse class provides an interace for AuditManager UpdateAssessmentStatus responses.
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
 * \sa AuditManagerClient::updateAssessmentStatus
 */

/*!
 * Constructs a UpdateAssessmentStatusResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAssessmentStatusResponse::UpdateAssessmentStatusResponse(
        const UpdateAssessmentStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AuditManagerResponse(new UpdateAssessmentStatusResponsePrivate(this), parent)
{
    setRequest(new UpdateAssessmentStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAssessmentStatusRequest * UpdateAssessmentStatusResponse::request() const
{
    Q_D(const UpdateAssessmentStatusResponse);
    return static_cast<const UpdateAssessmentStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AuditManager UpdateAssessmentStatus \a response.
 */
void UpdateAssessmentStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAssessmentStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AuditManager::UpdateAssessmentStatusResponsePrivate
 * \brief The UpdateAssessmentStatusResponsePrivate class provides private implementation for UpdateAssessmentStatusResponse.
 * \internal
 *
 * \inmodule QtAwsAuditManager
 */

/*!
 * Constructs a UpdateAssessmentStatusResponsePrivate object with public implementation \a q.
 */
UpdateAssessmentStatusResponsePrivate::UpdateAssessmentStatusResponsePrivate(
    UpdateAssessmentStatusResponse * const q) : AuditManagerResponsePrivate(q)
{

}

/*!
 * Parses a AuditManager UpdateAssessmentStatus response element from \a xml.
 */
void UpdateAssessmentStatusResponsePrivate::parseUpdateAssessmentStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAssessmentStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AuditManager
} // namespace QtAws
