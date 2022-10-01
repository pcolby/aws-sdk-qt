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

#include "updateassessmentframeworksharerequest.h"
#include "updateassessmentframeworksharerequest_p.h"
#include "updateassessmentframeworkshareresponse.h"
#include "auditmanagerrequest_p.h"

namespace QtAws {
namespace AuditManager {

/*!
 * \class QtAws::AuditManager::UpdateAssessmentFrameworkShareRequest
 * \brief The UpdateAssessmentFrameworkShareRequest class provides an interface for AuditManager UpdateAssessmentFrameworkShare requests.
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
 * \sa AuditManagerClient::updateAssessmentFrameworkShare
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAssessmentFrameworkShareRequest::UpdateAssessmentFrameworkShareRequest(const UpdateAssessmentFrameworkShareRequest &other)
    : AuditManagerRequest(new UpdateAssessmentFrameworkShareRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAssessmentFrameworkShareRequest object.
 */
UpdateAssessmentFrameworkShareRequest::UpdateAssessmentFrameworkShareRequest()
    : AuditManagerRequest(new UpdateAssessmentFrameworkShareRequestPrivate(AuditManagerRequest::UpdateAssessmentFrameworkShareAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAssessmentFrameworkShareRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAssessmentFrameworkShareResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAssessmentFrameworkShareRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAssessmentFrameworkShareResponse(*this, reply);
}

/*!
 * \class QtAws::AuditManager::UpdateAssessmentFrameworkShareRequestPrivate
 * \brief The UpdateAssessmentFrameworkShareRequestPrivate class provides private implementation for UpdateAssessmentFrameworkShareRequest.
 * \internal
 *
 * \inmodule QtAwsAuditManager
 */

/*!
 * Constructs a UpdateAssessmentFrameworkShareRequestPrivate object for AuditManager \a action,
 * with public implementation \a q.
 */
UpdateAssessmentFrameworkShareRequestPrivate::UpdateAssessmentFrameworkShareRequestPrivate(
    const AuditManagerRequest::Action action, UpdateAssessmentFrameworkShareRequest * const q)
    : AuditManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAssessmentFrameworkShareRequest
 * class' copy constructor.
 */
UpdateAssessmentFrameworkShareRequestPrivate::UpdateAssessmentFrameworkShareRequestPrivate(
    const UpdateAssessmentFrameworkShareRequestPrivate &other, UpdateAssessmentFrameworkShareRequest * const q)
    : AuditManagerRequestPrivate(other, q)
{

}

} // namespace AuditManager
} // namespace QtAws
