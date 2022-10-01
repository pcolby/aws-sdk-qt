// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getloginprofilerequest.h"
#include "getloginprofilerequest_p.h"
#include "getloginprofileresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::GetLoginProfileRequest
 * \brief The GetLoginProfileRequest class provides an interface for Iam GetLoginProfile requests.
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
 * \sa IamClient::getLoginProfile
 */

/*!
 * Constructs a copy of \a other.
 */
GetLoginProfileRequest::GetLoginProfileRequest(const GetLoginProfileRequest &other)
    : IamRequest(new GetLoginProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetLoginProfileRequest object.
 */
GetLoginProfileRequest::GetLoginProfileRequest()
    : IamRequest(new GetLoginProfileRequestPrivate(IamRequest::GetLoginProfileAction, this))
{

}

/*!
 * \reimp
 */
bool GetLoginProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetLoginProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetLoginProfileRequest::response(QNetworkReply * const reply) const
{
    return new GetLoginProfileResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::GetLoginProfileRequestPrivate
 * \brief The GetLoginProfileRequestPrivate class provides private implementation for GetLoginProfileRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a GetLoginProfileRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
GetLoginProfileRequestPrivate::GetLoginProfileRequestPrivate(
    const IamRequest::Action action, GetLoginProfileRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetLoginProfileRequest
 * class' copy constructor.
 */
GetLoginProfileRequestPrivate::GetLoginProfileRequestPrivate(
    const GetLoginProfileRequestPrivate &other, GetLoginProfileRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
