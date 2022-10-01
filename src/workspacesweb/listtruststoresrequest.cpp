// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtruststoresrequest.h"
#include "listtruststoresrequest_p.h"
#include "listtruststoresresponse.h"
#include "workspaceswebrequest_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::ListTrustStoresRequest
 * \brief The ListTrustStoresRequest class provides an interface for WorkSpacesWeb ListTrustStores requests.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::listTrustStores
 */

/*!
 * Constructs a copy of \a other.
 */
ListTrustStoresRequest::ListTrustStoresRequest(const ListTrustStoresRequest &other)
    : WorkSpacesWebRequest(new ListTrustStoresRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTrustStoresRequest object.
 */
ListTrustStoresRequest::ListTrustStoresRequest()
    : WorkSpacesWebRequest(new ListTrustStoresRequestPrivate(WorkSpacesWebRequest::ListTrustStoresAction, this))
{

}

/*!
 * \reimp
 */
bool ListTrustStoresRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTrustStoresResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTrustStoresRequest::response(QNetworkReply * const reply) const
{
    return new ListTrustStoresResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpacesWeb::ListTrustStoresRequestPrivate
 * \brief The ListTrustStoresRequestPrivate class provides private implementation for ListTrustStoresRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a ListTrustStoresRequestPrivate object for WorkSpacesWeb \a action,
 * with public implementation \a q.
 */
ListTrustStoresRequestPrivate::ListTrustStoresRequestPrivate(
    const WorkSpacesWebRequest::Action action, ListTrustStoresRequest * const q)
    : WorkSpacesWebRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTrustStoresRequest
 * class' copy constructor.
 */
ListTrustStoresRequestPrivate::ListTrustStoresRequestPrivate(
    const ListTrustStoresRequestPrivate &other, ListTrustStoresRequest * const q)
    : WorkSpacesWebRequestPrivate(other, q)
{

}

} // namespace WorkSpacesWeb
} // namespace QtAws
