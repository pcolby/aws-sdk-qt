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

#include "updateassessmentcontrolrequest.h"
#include "updateassessmentcontrolrequest_p.h"
#include "updateassessmentcontrolresponse.h"
#include "auditmanagerrequest_p.h"

namespace QtAws {
namespace AuditManager {

/*!
 * \class QtAws::AuditManager::UpdateAssessmentControlRequest
 * \brief The UpdateAssessmentControlRequest class provides an interface for AuditManager UpdateAssessmentControl requests.
 *
 * \inmodule QtAwsAuditManager
 *
 *  Welcome to the AWS Audit Manager API reference. This guide is for developers who need detailed information about the AWS
 *  Audit Manager API operations, data types, and errors.
 * 
 *  </p
 * 
 *  AWS Audit Manager is a service that provides automated evidence collection so that you can continuously audit your AWS
 *  usage, and assess the effectiveness of your controls to better manage risk and simplify
 * 
 *  compliance>
 * 
 *  AWS Audit Manager provides pre-built frameworks that structure and automate assessments for a given compliance standard.
 *  Frameworks include a pre-built collection of controls with descriptions and testing procedures, which are grouped
 *  according to the requirements of the specified compliance standard or regulation. You can also customize frameworks and
 *  controls to support internal audits with unique requirements.
 * 
 *  </p
 * 
 *  Use the following links to get started with the AWS Audit Manager
 * 
 *  API> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_Operations.html">Actions</a>: An alphabetical
 *  list of all AWS Audit Manager API
 * 
 *  operations> </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_Types.html">Data types</a>: An alphabetical
 *  list of all AWS Audit Manager data
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
 *  If you're new to AWS Audit Manager, we recommend that you review the <a
 *  href="https://docs.aws.amazon.com/audit-manager/latest/userguide/what-is.html"> AWS Audit Manager User
 *
 * \sa AuditManagerClient::updateAssessmentControl
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAssessmentControlRequest::UpdateAssessmentControlRequest(const UpdateAssessmentControlRequest &other)
    : AuditManagerRequest(new UpdateAssessmentControlRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAssessmentControlRequest object.
 */
UpdateAssessmentControlRequest::UpdateAssessmentControlRequest()
    : AuditManagerRequest(new UpdateAssessmentControlRequestPrivate(AuditManagerRequest::UpdateAssessmentControlAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAssessmentControlRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAssessmentControlResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAssessmentControlRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAssessmentControlResponse(*this, reply);
}

/*!
 * \class QtAws::AuditManager::UpdateAssessmentControlRequestPrivate
 * \brief The UpdateAssessmentControlRequestPrivate class provides private implementation for UpdateAssessmentControlRequest.
 * \internal
 *
 * \inmodule QtAwsAuditManager
 */

/*!
 * Constructs a UpdateAssessmentControlRequestPrivate object for AuditManager \a action,
 * with public implementation \a q.
 */
UpdateAssessmentControlRequestPrivate::UpdateAssessmentControlRequestPrivate(
    const AuditManagerRequest::Action action, UpdateAssessmentControlRequest * const q)
    : AuditManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAssessmentControlRequest
 * class' copy constructor.
 */
UpdateAssessmentControlRequestPrivate::UpdateAssessmentControlRequestPrivate(
    const UpdateAssessmentControlRequestPrivate &other, UpdateAssessmentControlRequest * const q)
    : AuditManagerRequestPrivate(other, q)
{

}

} // namespace AuditManager
} // namespace QtAws
