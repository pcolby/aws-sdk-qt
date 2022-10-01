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

#include "tagpolicyrequest.h"
#include "tagpolicyrequest_p.h"
#include "tagpolicyresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::TagPolicyRequest
 * \brief The TagPolicyRequest class provides an interface for Iam TagPolicy requests.
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
 * \sa IamClient::tagPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
TagPolicyRequest::TagPolicyRequest(const TagPolicyRequest &other)
    : IamRequest(new TagPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TagPolicyRequest object.
 */
TagPolicyRequest::TagPolicyRequest()
    : IamRequest(new TagPolicyRequestPrivate(IamRequest::TagPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool TagPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TagPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TagPolicyRequest::response(QNetworkReply * const reply) const
{
    return new TagPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::TagPolicyRequestPrivate
 * \brief The TagPolicyRequestPrivate class provides private implementation for TagPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a TagPolicyRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
TagPolicyRequestPrivate::TagPolicyRequestPrivate(
    const IamRequest::Action action, TagPolicyRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TagPolicyRequest
 * class' copy constructor.
 */
TagPolicyRequestPrivate::TagPolicyRequestPrivate(
    const TagPolicyRequestPrivate &other, TagPolicyRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
