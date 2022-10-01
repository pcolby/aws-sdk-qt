// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsamlprovidersrequest.h"
#include "listsamlprovidersrequest_p.h"
#include "listsamlprovidersresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListSAMLProvidersRequest
 * \brief The ListSAMLProvidersRequest class provides an interface for Iam ListSAMLProviders requests.
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
 * \sa IamClient::listSAMLProviders
 */

/*!
 * Constructs a copy of \a other.
 */
ListSAMLProvidersRequest::ListSAMLProvidersRequest(const ListSAMLProvidersRequest &other)
    : IamRequest(new ListSAMLProvidersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSAMLProvidersRequest object.
 */
ListSAMLProvidersRequest::ListSAMLProvidersRequest()
    : IamRequest(new ListSAMLProvidersRequestPrivate(IamRequest::ListSAMLProvidersAction, this))
{

}

/*!
 * \reimp
 */
bool ListSAMLProvidersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSAMLProvidersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSAMLProvidersRequest::response(QNetworkReply * const reply) const
{
    return new ListSAMLProvidersResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::ListSAMLProvidersRequestPrivate
 * \brief The ListSAMLProvidersRequestPrivate class provides private implementation for ListSAMLProvidersRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListSAMLProvidersRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
ListSAMLProvidersRequestPrivate::ListSAMLProvidersRequestPrivate(
    const IamRequest::Action action, ListSAMLProvidersRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSAMLProvidersRequest
 * class' copy constructor.
 */
ListSAMLProvidersRequestPrivate::ListSAMLProvidersRequestPrivate(
    const ListSAMLProvidersRequestPrivate &other, ListSAMLProvidersRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
