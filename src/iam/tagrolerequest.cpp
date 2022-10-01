// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "tagrolerequest.h"
#include "tagrolerequest_p.h"
#include "tagroleresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::TagRoleRequest
 * \brief The TagRoleRequest class provides an interface for Iam TagRole requests.
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
 * \sa IamClient::tagRole
 */

/*!
 * Constructs a copy of \a other.
 */
TagRoleRequest::TagRoleRequest(const TagRoleRequest &other)
    : IamRequest(new TagRoleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TagRoleRequest object.
 */
TagRoleRequest::TagRoleRequest()
    : IamRequest(new TagRoleRequestPrivate(IamRequest::TagRoleAction, this))
{

}

/*!
 * \reimp
 */
bool TagRoleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TagRoleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TagRoleRequest::response(QNetworkReply * const reply) const
{
    return new TagRoleResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::TagRoleRequestPrivate
 * \brief The TagRoleRequestPrivate class provides private implementation for TagRoleRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a TagRoleRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
TagRoleRequestPrivate::TagRoleRequestPrivate(
    const IamRequest::Action action, TagRoleRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TagRoleRequest
 * class' copy constructor.
 */
TagRoleRequestPrivate::TagRoleRequestPrivate(
    const TagRoleRequestPrivate &other, TagRoleRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
