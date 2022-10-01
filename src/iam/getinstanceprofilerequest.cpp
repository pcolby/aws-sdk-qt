// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getinstanceprofilerequest.h"
#include "getinstanceprofilerequest_p.h"
#include "getinstanceprofileresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::GetInstanceProfileRequest
 * \brief The GetInstanceProfileRequest class provides an interface for Iam GetInstanceProfile requests.
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
 * \sa IamClient::getInstanceProfile
 */

/*!
 * Constructs a copy of \a other.
 */
GetInstanceProfileRequest::GetInstanceProfileRequest(const GetInstanceProfileRequest &other)
    : IamRequest(new GetInstanceProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetInstanceProfileRequest object.
 */
GetInstanceProfileRequest::GetInstanceProfileRequest()
    : IamRequest(new GetInstanceProfileRequestPrivate(IamRequest::GetInstanceProfileAction, this))
{

}

/*!
 * \reimp
 */
bool GetInstanceProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetInstanceProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetInstanceProfileRequest::response(QNetworkReply * const reply) const
{
    return new GetInstanceProfileResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::GetInstanceProfileRequestPrivate
 * \brief The GetInstanceProfileRequestPrivate class provides private implementation for GetInstanceProfileRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a GetInstanceProfileRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
GetInstanceProfileRequestPrivate::GetInstanceProfileRequestPrivate(
    const IamRequest::Action action, GetInstanceProfileRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetInstanceProfileRequest
 * class' copy constructor.
 */
GetInstanceProfileRequestPrivate::GetInstanceProfileRequestPrivate(
    const GetInstanceProfileRequestPrivate &other, GetInstanceProfileRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
