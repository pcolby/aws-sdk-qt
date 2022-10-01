// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listopenidconnectprovidersrequest.h"
#include "listopenidconnectprovidersrequest_p.h"
#include "listopenidconnectprovidersresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListOpenIDConnectProvidersRequest
 * \brief The ListOpenIDConnectProvidersRequest class provides an interface for Iam ListOpenIDConnectProviders requests.
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
 * \sa IamClient::listOpenIDConnectProviders
 */

/*!
 * Constructs a copy of \a other.
 */
ListOpenIDConnectProvidersRequest::ListOpenIDConnectProvidersRequest(const ListOpenIDConnectProvidersRequest &other)
    : IamRequest(new ListOpenIDConnectProvidersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListOpenIDConnectProvidersRequest object.
 */
ListOpenIDConnectProvidersRequest::ListOpenIDConnectProvidersRequest()
    : IamRequest(new ListOpenIDConnectProvidersRequestPrivate(IamRequest::ListOpenIDConnectProvidersAction, this))
{

}

/*!
 * \reimp
 */
bool ListOpenIDConnectProvidersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListOpenIDConnectProvidersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListOpenIDConnectProvidersRequest::response(QNetworkReply * const reply) const
{
    return new ListOpenIDConnectProvidersResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::ListOpenIDConnectProvidersRequestPrivate
 * \brief The ListOpenIDConnectProvidersRequestPrivate class provides private implementation for ListOpenIDConnectProvidersRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListOpenIDConnectProvidersRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
ListOpenIDConnectProvidersRequestPrivate::ListOpenIDConnectProvidersRequestPrivate(
    const IamRequest::Action action, ListOpenIDConnectProvidersRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListOpenIDConnectProvidersRequest
 * class' copy constructor.
 */
ListOpenIDConnectProvidersRequestPrivate::ListOpenIDConnectProvidersRequestPrivate(
    const ListOpenIDConnectProvidersRequestPrivate &other, ListOpenIDConnectProvidersRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
