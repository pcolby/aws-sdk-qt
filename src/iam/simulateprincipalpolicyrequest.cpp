// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "simulateprincipalpolicyrequest.h"
#include "simulateprincipalpolicyrequest_p.h"
#include "simulateprincipalpolicyresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::SimulatePrincipalPolicyRequest
 * \brief The SimulatePrincipalPolicyRequest class provides an interface for Iam SimulatePrincipalPolicy requests.
 *
 * \inmodule QtAwsIam
 *
 *  <fullname>Identity and Access Management</fullname>
 * 
 *  Identity and Access Management (IAM) is a web service for securely controlling access to Amazon Web Services services.
 *  With IAM, you can centrally manage users, security credentials such as access keys, and permissions that control which
 *  Amazon Web Services resources users and applications can access. For more information about IAM, see <a
 *  href="http://aws.amazon.com/iam/">Identity and Access Management (IAM)</a> and the <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/">Identity and Access Management User
 *
 * \sa IamClient::simulatePrincipalPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
SimulatePrincipalPolicyRequest::SimulatePrincipalPolicyRequest(const SimulatePrincipalPolicyRequest &other)
    : IamRequest(new SimulatePrincipalPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SimulatePrincipalPolicyRequest object.
 */
SimulatePrincipalPolicyRequest::SimulatePrincipalPolicyRequest()
    : IamRequest(new SimulatePrincipalPolicyRequestPrivate(IamRequest::SimulatePrincipalPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool SimulatePrincipalPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SimulatePrincipalPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SimulatePrincipalPolicyRequest::response(QNetworkReply * const reply) const
{
    return new SimulatePrincipalPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::SimulatePrincipalPolicyRequestPrivate
 * \brief The SimulatePrincipalPolicyRequestPrivate class provides private implementation for SimulatePrincipalPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a SimulatePrincipalPolicyRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
SimulatePrincipalPolicyRequestPrivate::SimulatePrincipalPolicyRequestPrivate(
    const IamRequest::Action action, SimulatePrincipalPolicyRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SimulatePrincipalPolicyRequest
 * class' copy constructor.
 */
SimulatePrincipalPolicyRequestPrivate::SimulatePrincipalPolicyRequestPrivate(
    const SimulatePrincipalPolicyRequestPrivate &other, SimulatePrincipalPolicyRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
