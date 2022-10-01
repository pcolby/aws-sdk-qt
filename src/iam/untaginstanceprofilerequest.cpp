// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "untaginstanceprofilerequest.h"
#include "untaginstanceprofilerequest_p.h"
#include "untaginstanceprofileresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::UntagInstanceProfileRequest
 * \brief The UntagInstanceProfileRequest class provides an interface for Iam UntagInstanceProfile requests.
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
 * \sa IamClient::untagInstanceProfile
 */

/*!
 * Constructs a copy of \a other.
 */
UntagInstanceProfileRequest::UntagInstanceProfileRequest(const UntagInstanceProfileRequest &other)
    : IamRequest(new UntagInstanceProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UntagInstanceProfileRequest object.
 */
UntagInstanceProfileRequest::UntagInstanceProfileRequest()
    : IamRequest(new UntagInstanceProfileRequestPrivate(IamRequest::UntagInstanceProfileAction, this))
{

}

/*!
 * \reimp
 */
bool UntagInstanceProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UntagInstanceProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UntagInstanceProfileRequest::response(QNetworkReply * const reply) const
{
    return new UntagInstanceProfileResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::UntagInstanceProfileRequestPrivate
 * \brief The UntagInstanceProfileRequestPrivate class provides private implementation for UntagInstanceProfileRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a UntagInstanceProfileRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
UntagInstanceProfileRequestPrivate::UntagInstanceProfileRequestPrivate(
    const IamRequest::Action action, UntagInstanceProfileRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UntagInstanceProfileRequest
 * class' copy constructor.
 */
UntagInstanceProfileRequestPrivate::UntagInstanceProfileRequestPrivate(
    const UntagInstanceProfileRequestPrivate &other, UntagInstanceProfileRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
