// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listaccountsrequest.h"
#include "listaccountsrequest_p.h"
#include "listaccountsresponse.h"
#include "ssorequest_p.h"

namespace QtAws {
namespace Sso {

/*!
 * \class QtAws::Sso::ListAccountsRequest
 * \brief The ListAccountsRequest class provides an interface for Sso ListAccounts requests.
 *
 * \inmodule QtAwsSso
 *
 *  AWS IAM Identity Center (successor to AWS Single Sign-On) Portal is a web service that makes it easy for you to assign
 *  user access to IAM Identity Center resources such as the AWS access portal. Users can get AWS account applications and
 *  roles assigned to them and get federated into the
 * 
 *  application> <note>
 * 
 *  Although AWS Single Sign-On was renamed, the <code>sso</code> and <code>identitystore</code> API namespaces will
 *  continue to retain their original name for backward compatibility purposes. For more information, see <a
 *  href="https://docs.aws.amazon.com/singlesignon/latest/userguide/what-is.html#renamed">IAM Identity Center
 * 
 *  rename</a>> </note>
 * 
 *  This reference guide describes the IAM Identity Center Portal operations that you can call programatically and includes
 *  detailed information on data types and
 * 
 *  errors> <note>
 * 
 *  AWS provides SDKs that consist of libraries and sample code for various programming languages and platforms, such as
 *  Java, Ruby, .Net, iOS, or Android. The SDKs provide a convenient way to create programmatic access to IAM Identity
 *  Center and other AWS services. For more information about the AWS SDKs, including how to download and install them, see
 *  <a href="http://aws.amazon.com/tools/">Tools for Amazon Web
 *
 * \sa SsoClient::listAccounts
 */

/*!
 * Constructs a copy of \a other.
 */
ListAccountsRequest::ListAccountsRequest(const ListAccountsRequest &other)
    : SsoRequest(new ListAccountsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAccountsRequest object.
 */
ListAccountsRequest::ListAccountsRequest()
    : SsoRequest(new ListAccountsRequestPrivate(SsoRequest::ListAccountsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAccountsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAccountsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAccountsRequest::response(QNetworkReply * const reply) const
{
    return new ListAccountsResponse(*this, reply);
}

/*!
 * \class QtAws::Sso::ListAccountsRequestPrivate
 * \brief The ListAccountsRequestPrivate class provides private implementation for ListAccountsRequest.
 * \internal
 *
 * \inmodule QtAwsSso
 */

/*!
 * Constructs a ListAccountsRequestPrivate object for Sso \a action,
 * with public implementation \a q.
 */
ListAccountsRequestPrivate::ListAccountsRequestPrivate(
    const SsoRequest::Action action, ListAccountsRequest * const q)
    : SsoRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAccountsRequest
 * class' copy constructor.
 */
ListAccountsRequestPrivate::ListAccountsRequestPrivate(
    const ListAccountsRequestPrivate &other, ListAccountsRequest * const q)
    : SsoRequestPrivate(other, q)
{

}

} // namespace Sso
} // namespace QtAws
