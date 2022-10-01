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

#include "listcampaignsrequest.h"
#include "listcampaignsrequest_p.h"
#include "listcampaignsresponse.h"
#include "connectcampaignsrequest_p.h"

namespace QtAws {
namespace ConnectCampaigns {

/*!
 * \class QtAws::ConnectCampaigns::ListCampaignsRequest
 * \brief The ListCampaignsRequest class provides an interface for ConnectCampaigns ListCampaigns requests.
 *
 * \inmodule QtAwsConnectCampaigns
 *
 *
 * \sa ConnectCampaignsClient::listCampaigns
 */

/*!
 * Constructs a copy of \a other.
 */
ListCampaignsRequest::ListCampaignsRequest(const ListCampaignsRequest &other)
    : ConnectCampaignsRequest(new ListCampaignsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListCampaignsRequest object.
 */
ListCampaignsRequest::ListCampaignsRequest()
    : ConnectCampaignsRequest(new ListCampaignsRequestPrivate(ConnectCampaignsRequest::ListCampaignsAction, this))
{

}

/*!
 * \reimp
 */
bool ListCampaignsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListCampaignsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListCampaignsRequest::response(QNetworkReply * const reply) const
{
    return new ListCampaignsResponse(*this, reply);
}

/*!
 * \class QtAws::ConnectCampaigns::ListCampaignsRequestPrivate
 * \brief The ListCampaignsRequestPrivate class provides private implementation for ListCampaignsRequest.
 * \internal
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a ListCampaignsRequestPrivate object for ConnectCampaigns \a action,
 * with public implementation \a q.
 */
ListCampaignsRequestPrivate::ListCampaignsRequestPrivate(
    const ConnectCampaignsRequest::Action action, ListCampaignsRequest * const q)
    : ConnectCampaignsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListCampaignsRequest
 * class' copy constructor.
 */
ListCampaignsRequestPrivate::ListCampaignsRequestPrivate(
    const ListCampaignsRequestPrivate &other, ListCampaignsRequest * const q)
    : ConnectCampaignsRequestPrivate(other, q)
{

}

} // namespace ConnectCampaigns
} // namespace QtAws
