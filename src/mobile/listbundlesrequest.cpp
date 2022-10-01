// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbundlesrequest.h"
#include "listbundlesrequest_p.h"
#include "listbundlesresponse.h"
#include "mobilerequest_p.h"

namespace QtAws {
namespace Mobile {

/*!
 * \class QtAws::Mobile::ListBundlesRequest
 * \brief The ListBundlesRequest class provides an interface for Mobile ListBundles requests.
 *
 * \inmodule QtAwsMobile
 *
 *  AWS Mobile Service provides mobile app and website developers with capabilities required to configure AWS resources and
 *  bootstrap their developer desktop projects with the necessary SDKs, constants, tools and samples to make use of those
 *  resources.
 *
 * \sa MobileClient::listBundles
 */

/*!
 * Constructs a copy of \a other.
 */
ListBundlesRequest::ListBundlesRequest(const ListBundlesRequest &other)
    : MobileRequest(new ListBundlesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBundlesRequest object.
 */
ListBundlesRequest::ListBundlesRequest()
    : MobileRequest(new ListBundlesRequestPrivate(MobileRequest::ListBundlesAction, this))
{

}

/*!
 * \reimp
 */
bool ListBundlesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListBundlesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBundlesRequest::response(QNetworkReply * const reply) const
{
    return new ListBundlesResponse(*this, reply);
}

/*!
 * \class QtAws::Mobile::ListBundlesRequestPrivate
 * \brief The ListBundlesRequestPrivate class provides private implementation for ListBundlesRequest.
 * \internal
 *
 * \inmodule QtAwsMobile
 */

/*!
 * Constructs a ListBundlesRequestPrivate object for Mobile \a action,
 * with public implementation \a q.
 */
ListBundlesRequestPrivate::ListBundlesRequestPrivate(
    const MobileRequest::Action action, ListBundlesRequest * const q)
    : MobileRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBundlesRequest
 * class' copy constructor.
 */
ListBundlesRequestPrivate::ListBundlesRequestPrivate(
    const ListBundlesRequestPrivate &other, ListBundlesRequest * const q)
    : MobileRequestPrivate(other, q)
{

}

} // namespace Mobile
} // namespace QtAws
