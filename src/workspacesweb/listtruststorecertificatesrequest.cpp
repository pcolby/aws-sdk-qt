// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtruststorecertificatesrequest.h"
#include "listtruststorecertificatesrequest_p.h"
#include "listtruststorecertificatesresponse.h"
#include "workspaceswebrequest_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::ListTrustStoreCertificatesRequest
 * \brief The ListTrustStoreCertificatesRequest class provides an interface for WorkSpacesWeb ListTrustStoreCertificates requests.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::listTrustStoreCertificates
 */

/*!
 * Constructs a copy of \a other.
 */
ListTrustStoreCertificatesRequest::ListTrustStoreCertificatesRequest(const ListTrustStoreCertificatesRequest &other)
    : WorkSpacesWebRequest(new ListTrustStoreCertificatesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTrustStoreCertificatesRequest object.
 */
ListTrustStoreCertificatesRequest::ListTrustStoreCertificatesRequest()
    : WorkSpacesWebRequest(new ListTrustStoreCertificatesRequestPrivate(WorkSpacesWebRequest::ListTrustStoreCertificatesAction, this))
{

}

/*!
 * \reimp
 */
bool ListTrustStoreCertificatesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTrustStoreCertificatesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTrustStoreCertificatesRequest::response(QNetworkReply * const reply) const
{
    return new ListTrustStoreCertificatesResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpacesWeb::ListTrustStoreCertificatesRequestPrivate
 * \brief The ListTrustStoreCertificatesRequestPrivate class provides private implementation for ListTrustStoreCertificatesRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a ListTrustStoreCertificatesRequestPrivate object for WorkSpacesWeb \a action,
 * with public implementation \a q.
 */
ListTrustStoreCertificatesRequestPrivate::ListTrustStoreCertificatesRequestPrivate(
    const WorkSpacesWebRequest::Action action, ListTrustStoreCertificatesRequest * const q)
    : WorkSpacesWebRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTrustStoreCertificatesRequest
 * class' copy constructor.
 */
ListTrustStoreCertificatesRequestPrivate::ListTrustStoreCertificatesRequestPrivate(
    const ListTrustStoreCertificatesRequestPrivate &other, ListTrustStoreCertificatesRequest * const q)
    : WorkSpacesWebRequestPrivate(other, q)
{

}

} // namespace WorkSpacesWeb
} // namespace QtAws
