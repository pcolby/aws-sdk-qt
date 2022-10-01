// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createactivationrequest.h"
#include "createactivationrequest_p.h"
#include "createactivationresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace Ssm {

/*!
 * \class QtAws::Ssm::CreateActivationRequest
 * \brief The CreateActivationRequest class provides an interface for Ssm CreateActivation requests.
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
 * \sa SsmClient::createActivation
 */

/*!
 * Constructs a copy of \a other.
 */
CreateActivationRequest::CreateActivationRequest(const CreateActivationRequest &other)
    : SsmRequest(new CreateActivationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateActivationRequest object.
 */
CreateActivationRequest::CreateActivationRequest()
    : SsmRequest(new CreateActivationRequestPrivate(SsmRequest::CreateActivationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateActivationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateActivationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateActivationRequest::response(QNetworkReply * const reply) const
{
    return new CreateActivationResponse(*this, reply);
}

/*!
 * \class QtAws::Ssm::CreateActivationRequestPrivate
 * \brief The CreateActivationRequestPrivate class provides private implementation for CreateActivationRequest.
 * \internal
 *
 * \inmodule QtAwsSsm
 */

/*!
 * Constructs a CreateActivationRequestPrivate object for Ssm \a action,
 * with public implementation \a q.
 */
CreateActivationRequestPrivate::CreateActivationRequestPrivate(
    const SsmRequest::Action action, CreateActivationRequest * const q)
    : SsmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateActivationRequest
 * class' copy constructor.
 */
CreateActivationRequestPrivate::CreateActivationRequestPrivate(
    const CreateActivationRequestPrivate &other, CreateActivationRequest * const q)
    : SsmRequestPrivate(other, q)
{

}

} // namespace Ssm
} // namespace QtAws
