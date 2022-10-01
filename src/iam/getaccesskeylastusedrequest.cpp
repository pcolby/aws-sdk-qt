// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getaccesskeylastusedrequest.h"
#include "getaccesskeylastusedrequest_p.h"
#include "getaccesskeylastusedresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::GetAccessKeyLastUsedRequest
 * \brief The GetAccessKeyLastUsedRequest class provides an interface for Iam GetAccessKeyLastUsed requests.
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
 * \sa IamClient::getAccessKeyLastUsed
 */

/*!
 * Constructs a copy of \a other.
 */
GetAccessKeyLastUsedRequest::GetAccessKeyLastUsedRequest(const GetAccessKeyLastUsedRequest &other)
    : IamRequest(new GetAccessKeyLastUsedRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAccessKeyLastUsedRequest object.
 */
GetAccessKeyLastUsedRequest::GetAccessKeyLastUsedRequest()
    : IamRequest(new GetAccessKeyLastUsedRequestPrivate(IamRequest::GetAccessKeyLastUsedAction, this))
{

}

/*!
 * \reimp
 */
bool GetAccessKeyLastUsedRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAccessKeyLastUsedResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAccessKeyLastUsedRequest::response(QNetworkReply * const reply) const
{
    return new GetAccessKeyLastUsedResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::GetAccessKeyLastUsedRequestPrivate
 * \brief The GetAccessKeyLastUsedRequestPrivate class provides private implementation for GetAccessKeyLastUsedRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a GetAccessKeyLastUsedRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
GetAccessKeyLastUsedRequestPrivate::GetAccessKeyLastUsedRequestPrivate(
    const IamRequest::Action action, GetAccessKeyLastUsedRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAccessKeyLastUsedRequest
 * class' copy constructor.
 */
GetAccessKeyLastUsedRequestPrivate::GetAccessKeyLastUsedRequestPrivate(
    const GetAccessKeyLastUsedRequestPrivate &other, GetAccessKeyLastUsedRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
