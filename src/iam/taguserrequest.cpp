// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "taguserrequest.h"
#include "taguserrequest_p.h"
#include "taguserresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::TagUserRequest
 * \brief The TagUserRequest class provides an interface for Iam TagUser requests.
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
 * \sa IamClient::tagUser
 */

/*!
 * Constructs a copy of \a other.
 */
TagUserRequest::TagUserRequest(const TagUserRequest &other)
    : IamRequest(new TagUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TagUserRequest object.
 */
TagUserRequest::TagUserRequest()
    : IamRequest(new TagUserRequestPrivate(IamRequest::TagUserAction, this))
{

}

/*!
 * \reimp
 */
bool TagUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TagUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TagUserRequest::response(QNetworkReply * const reply) const
{
    return new TagUserResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::TagUserRequestPrivate
 * \brief The TagUserRequestPrivate class provides private implementation for TagUserRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a TagUserRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
TagUserRequestPrivate::TagUserRequestPrivate(
    const IamRequest::Action action, TagUserRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TagUserRequest
 * class' copy constructor.
 */
TagUserRequestPrivate::TagUserRequestPrivate(
    const TagUserRequestPrivate &other, TagUserRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
