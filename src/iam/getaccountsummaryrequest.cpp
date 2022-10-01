// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getaccountsummaryrequest.h"
#include "getaccountsummaryrequest_p.h"
#include "getaccountsummaryresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::GetAccountSummaryRequest
 * \brief The GetAccountSummaryRequest class provides an interface for Iam GetAccountSummary requests.
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
 * \sa IamClient::getAccountSummary
 */

/*!
 * Constructs a copy of \a other.
 */
GetAccountSummaryRequest::GetAccountSummaryRequest(const GetAccountSummaryRequest &other)
    : IamRequest(new GetAccountSummaryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAccountSummaryRequest object.
 */
GetAccountSummaryRequest::GetAccountSummaryRequest()
    : IamRequest(new GetAccountSummaryRequestPrivate(IamRequest::GetAccountSummaryAction, this))
{

}

/*!
 * \reimp
 */
bool GetAccountSummaryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAccountSummaryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAccountSummaryRequest::response(QNetworkReply * const reply) const
{
    return new GetAccountSummaryResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::GetAccountSummaryRequestPrivate
 * \brief The GetAccountSummaryRequestPrivate class provides private implementation for GetAccountSummaryRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a GetAccountSummaryRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
GetAccountSummaryRequestPrivate::GetAccountSummaryRequestPrivate(
    const IamRequest::Action action, GetAccountSummaryRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAccountSummaryRequest
 * class' copy constructor.
 */
GetAccountSummaryRequestPrivate::GetAccountSummaryRequestPrivate(
    const GetAccountSummaryRequestPrivate &other, GetAccountSummaryRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
