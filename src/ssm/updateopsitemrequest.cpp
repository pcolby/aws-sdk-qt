// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateopsitemrequest.h"
#include "updateopsitemrequest_p.h"
#include "updateopsitemresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace Ssm {

/*!
 * \class QtAws::Ssm::UpdateOpsItemRequest
 * \brief The UpdateOpsItemRequest class provides an interface for Ssm UpdateOpsItem requests.
 *
 * \inmodule QtAwsSsm
 *
 *  Amazon Web Services Systems Manager is a collection of capabilities to help you manage your applications and
 *  infrastructure running in the Amazon Web Services Cloud;. Systems Manager simplifies application and resource
 *  management, shortens the time to detect and resolve operational problems, and helps you manage your Amazon Web Services
 *  resources securely at
 * 
 *  scale>
 * 
 *  This reference is intended to be used with the <a
 *  href="https://docs.aws.amazon.com/systems-manager/latest/userguide/">Amazon Web Services Systems Manager User
 * 
 *  Guide</a>>
 * 
 *  To get started, verify prerequisites. For more information, see <a
 *  href="https://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-setting-up.html">Setting up Amazon
 *  Web Services Systems
 * 
 *  Manager</a>> <p class="title"> <b>Related resources</b>
 * 
 *  </p <ul> <li>
 * 
 *  For information about how to use a Query API, see <a
 *  href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/making-api-requests.html">Making API requests</a>.
 * 
 *  </p </li> <li>
 * 
 *  For information about other API operations you can perform on EC2 instances, see the <a
 *  href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/">Amazon EC2 API
 * 
 *  Reference</a>> </li> <li>
 * 
 *  For information about AppConfig, a capability of Systems Manager, see the <a
 *  href="https://docs.aws.amazon.com/appconfig/latest/userguide/">AppConfig User Guide</a> and the <a
 *  href="https://docs.aws.amazon.com/appconfig/2019-10-09/APIReference/">AppConfig API
 * 
 *  Reference</a>> </li> <li>
 * 
 *  For information about Incident Manager, a capability of Systems Manager, see the <a
 *  href="https://docs.aws.amazon.com/incident-manager/latest/userguide/">Incident Manager User Guide</a> and the <a
 *  href="https://docs.aws.amazon.com/incident-manager/latest/APIReference/">Incident Manager API
 *
 * \sa SsmClient::updateOpsItem
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateOpsItemRequest::UpdateOpsItemRequest(const UpdateOpsItemRequest &other)
    : SsmRequest(new UpdateOpsItemRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateOpsItemRequest object.
 */
UpdateOpsItemRequest::UpdateOpsItemRequest()
    : SsmRequest(new UpdateOpsItemRequestPrivate(SsmRequest::UpdateOpsItemAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateOpsItemRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateOpsItemResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateOpsItemRequest::response(QNetworkReply * const reply) const
{
    return new UpdateOpsItemResponse(*this, reply);
}

/*!
 * \class QtAws::Ssm::UpdateOpsItemRequestPrivate
 * \brief The UpdateOpsItemRequestPrivate class provides private implementation for UpdateOpsItemRequest.
 * \internal
 *
 * \inmodule QtAwsSsm
 */

/*!
 * Constructs a UpdateOpsItemRequestPrivate object for Ssm \a action,
 * with public implementation \a q.
 */
UpdateOpsItemRequestPrivate::UpdateOpsItemRequestPrivate(
    const SsmRequest::Action action, UpdateOpsItemRequest * const q)
    : SsmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateOpsItemRequest
 * class' copy constructor.
 */
UpdateOpsItemRequestPrivate::UpdateOpsItemRequestPrivate(
    const UpdateOpsItemRequestPrivate &other, UpdateOpsItemRequest * const q)
    : SsmRequestPrivate(other, q)
{

}

} // namespace Ssm
} // namespace QtAws
