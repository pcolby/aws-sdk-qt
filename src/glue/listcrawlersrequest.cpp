/*
    Copyright 2013-2019 Paul Colby

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

#include "listcrawlersrequest.h"
#include "listcrawlersrequest_p.h"
#include "listcrawlersresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::ListCrawlersRequest
 * \brief The ListCrawlersRequest class provides an interface for Glue ListCrawlers requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::listCrawlers
 */

/*!
 * Constructs a copy of \a other.
 */
ListCrawlersRequest::ListCrawlersRequest(const ListCrawlersRequest &other)
    : GlueRequest(new ListCrawlersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListCrawlersRequest object.
 */
ListCrawlersRequest::ListCrawlersRequest()
    : GlueRequest(new ListCrawlersRequestPrivate(GlueRequest::ListCrawlersAction, this))
{

}

/*!
 * \reimp
 */
bool ListCrawlersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListCrawlersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListCrawlersRequest::response(QNetworkReply * const reply) const
{
    return new ListCrawlersResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::ListCrawlersRequestPrivate
 * \brief The ListCrawlersRequestPrivate class provides private implementation for ListCrawlersRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a ListCrawlersRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
ListCrawlersRequestPrivate::ListCrawlersRequestPrivate(
    const GlueRequest::Action action, ListCrawlersRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListCrawlersRequest
 * class' copy constructor.
 */
ListCrawlersRequestPrivate::ListCrawlersRequestPrivate(
    const ListCrawlersRequestPrivate &other, ListCrawlersRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
