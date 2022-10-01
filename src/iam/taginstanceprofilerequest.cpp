// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "taginstanceprofilerequest.h"
#include "taginstanceprofilerequest_p.h"
#include "taginstanceprofileresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::TagInstanceProfileRequest
 * \brief The TagInstanceProfileRequest class provides an interface for Iam TagInstanceProfile requests.
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
 * \sa IamClient::tagInstanceProfile
 */

/*!
 * Constructs a copy of \a other.
 */
TagInstanceProfileRequest::TagInstanceProfileRequest(const TagInstanceProfileRequest &other)
    : IamRequest(new TagInstanceProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TagInstanceProfileRequest object.
 */
TagInstanceProfileRequest::TagInstanceProfileRequest()
    : IamRequest(new TagInstanceProfileRequestPrivate(IamRequest::TagInstanceProfileAction, this))
{

}

/*!
 * \reimp
 */
bool TagInstanceProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TagInstanceProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TagInstanceProfileRequest::response(QNetworkReply * const reply) const
{
    return new TagInstanceProfileResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::TagInstanceProfileRequestPrivate
 * \brief The TagInstanceProfileRequestPrivate class provides private implementation for TagInstanceProfileRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a TagInstanceProfileRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
TagInstanceProfileRequestPrivate::TagInstanceProfileRequestPrivate(
    const IamRequest::Action action, TagInstanceProfileRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TagInstanceProfileRequest
 * class' copy constructor.
 */
TagInstanceProfileRequestPrivate::TagInstanceProfileRequestPrivate(
    const TagInstanceProfileRequestPrivate &other, TagInstanceProfileRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
