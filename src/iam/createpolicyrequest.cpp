// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createpolicyrequest.h"
#include "createpolicyrequest_p.h"
#include "createpolicyresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::CreatePolicyRequest
 * \brief The CreatePolicyRequest class provides an interface for Iam CreatePolicy requests.
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
 * \sa IamClient::createPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
CreatePolicyRequest::CreatePolicyRequest(const CreatePolicyRequest &other)
    : IamRequest(new CreatePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreatePolicyRequest object.
 */
CreatePolicyRequest::CreatePolicyRequest()
    : IamRequest(new CreatePolicyRequestPrivate(IamRequest::CreatePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool CreatePolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreatePolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreatePolicyRequest::response(QNetworkReply * const reply) const
{
    return new CreatePolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::CreatePolicyRequestPrivate
 * \brief The CreatePolicyRequestPrivate class provides private implementation for CreatePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a CreatePolicyRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
CreatePolicyRequestPrivate::CreatePolicyRequestPrivate(
    const IamRequest::Action action, CreatePolicyRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreatePolicyRequest
 * class' copy constructor.
 */
CreatePolicyRequestPrivate::CreatePolicyRequestPrivate(
    const CreatePolicyRequestPrivate &other, CreatePolicyRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
