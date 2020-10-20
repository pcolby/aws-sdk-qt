/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
