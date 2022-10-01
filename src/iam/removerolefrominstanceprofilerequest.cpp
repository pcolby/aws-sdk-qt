// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "removerolefrominstanceprofilerequest.h"
#include "removerolefrominstanceprofilerequest_p.h"
#include "removerolefrominstanceprofileresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::RemoveRoleFromInstanceProfileRequest
 * \brief The RemoveRoleFromInstanceProfileRequest class provides an interface for Iam RemoveRoleFromInstanceProfile requests.
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
 * \sa IamClient::removeRoleFromInstanceProfile
 */

/*!
 * Constructs a copy of \a other.
 */
RemoveRoleFromInstanceProfileRequest::RemoveRoleFromInstanceProfileRequest(const RemoveRoleFromInstanceProfileRequest &other)
    : IamRequest(new RemoveRoleFromInstanceProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RemoveRoleFromInstanceProfileRequest object.
 */
RemoveRoleFromInstanceProfileRequest::RemoveRoleFromInstanceProfileRequest()
    : IamRequest(new RemoveRoleFromInstanceProfileRequestPrivate(IamRequest::RemoveRoleFromInstanceProfileAction, this))
{

}

/*!
 * \reimp
 */
bool RemoveRoleFromInstanceProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RemoveRoleFromInstanceProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RemoveRoleFromInstanceProfileRequest::response(QNetworkReply * const reply) const
{
    return new RemoveRoleFromInstanceProfileResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::RemoveRoleFromInstanceProfileRequestPrivate
 * \brief The RemoveRoleFromInstanceProfileRequestPrivate class provides private implementation for RemoveRoleFromInstanceProfileRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a RemoveRoleFromInstanceProfileRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
RemoveRoleFromInstanceProfileRequestPrivate::RemoveRoleFromInstanceProfileRequestPrivate(
    const IamRequest::Action action, RemoveRoleFromInstanceProfileRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RemoveRoleFromInstanceProfileRequest
 * class' copy constructor.
 */
RemoveRoleFromInstanceProfileRequestPrivate::RemoveRoleFromInstanceProfileRequestPrivate(
    const RemoveRoleFromInstanceProfileRequestPrivate &other, RemoveRoleFromInstanceProfileRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
