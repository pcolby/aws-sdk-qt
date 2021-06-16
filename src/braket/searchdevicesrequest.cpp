/*
    Copyright 2013-2021 Paul Colby

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

#include "searchdevicesrequest.h"
#include "searchdevicesrequest_p.h"
#include "searchdevicesresponse.h"
#include "braketrequest_p.h"

namespace QtAws {
namespace Braket {

/*!
 * \class QtAws::Braket::SearchDevicesRequest
 * \brief The SearchDevicesRequest class provides an interface for Braket SearchDevices requests.
 *
 * \inmodule QtAwsBraket
 *
 *  The Amazon Braket API Reference provides information about the operations and structures supported in Amazon
 *
 * \sa BraketClient::searchDevices
 */

/*!
 * Constructs a copy of \a other.
 */
SearchDevicesRequest::SearchDevicesRequest(const SearchDevicesRequest &other)
    : BraketRequest(new SearchDevicesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SearchDevicesRequest object.
 */
SearchDevicesRequest::SearchDevicesRequest()
    : BraketRequest(new SearchDevicesRequestPrivate(BraketRequest::SearchDevicesAction, this))
{

}

/*!
 * \reimp
 */
bool SearchDevicesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SearchDevicesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SearchDevicesRequest::response(QNetworkReply * const reply) const
{
    return new SearchDevicesResponse(*this, reply);
}

/*!
 * \class QtAws::Braket::SearchDevicesRequestPrivate
 * \brief The SearchDevicesRequestPrivate class provides private implementation for SearchDevicesRequest.
 * \internal
 *
 * \inmodule QtAwsBraket
 */

/*!
 * Constructs a SearchDevicesRequestPrivate object for Braket \a action,
 * with public implementation \a q.
 */
SearchDevicesRequestPrivate::SearchDevicesRequestPrivate(
    const BraketRequest::Action action, SearchDevicesRequest * const q)
    : BraketRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SearchDevicesRequest
 * class' copy constructor.
 */
SearchDevicesRequestPrivate::SearchDevicesRequestPrivate(
    const SearchDevicesRequestPrivate &other, SearchDevicesRequest * const q)
    : BraketRequestPrivate(other, q)
{

}

} // namespace Braket
} // namespace QtAws
