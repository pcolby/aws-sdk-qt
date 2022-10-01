// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletepolicyversionrequest.h"
#include "deletepolicyversionrequest_p.h"
#include "deletepolicyversionresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::DeletePolicyVersionRequest
 * \brief The DeletePolicyVersionRequest class provides an interface for Iam DeletePolicyVersion requests.
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
 * \sa IamClient::deletePolicyVersion
 */

/*!
 * Constructs a copy of \a other.
 */
DeletePolicyVersionRequest::DeletePolicyVersionRequest(const DeletePolicyVersionRequest &other)
    : IamRequest(new DeletePolicyVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeletePolicyVersionRequest object.
 */
DeletePolicyVersionRequest::DeletePolicyVersionRequest()
    : IamRequest(new DeletePolicyVersionRequestPrivate(IamRequest::DeletePolicyVersionAction, this))
{

}

/*!
 * \reimp
 */
bool DeletePolicyVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeletePolicyVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePolicyVersionRequest::response(QNetworkReply * const reply) const
{
    return new DeletePolicyVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::DeletePolicyVersionRequestPrivate
 * \brief The DeletePolicyVersionRequestPrivate class provides private implementation for DeletePolicyVersionRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a DeletePolicyVersionRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
DeletePolicyVersionRequestPrivate::DeletePolicyVersionRequestPrivate(
    const IamRequest::Action action, DeletePolicyVersionRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeletePolicyVersionRequest
 * class' copy constructor.
 */
DeletePolicyVersionRequestPrivate::DeletePolicyVersionRequestPrivate(
    const DeletePolicyVersionRequestPrivate &other, DeletePolicyVersionRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
