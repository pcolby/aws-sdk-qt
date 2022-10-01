// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcrawlsrequest.h"
#include "listcrawlsrequest_p.h"
#include "listcrawlsresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::ListCrawlsRequest
 * \brief The ListCrawlsRequest class provides an interface for Glue ListCrawls requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::listCrawls
 */

/*!
 * Constructs a copy of \a other.
 */
ListCrawlsRequest::ListCrawlsRequest(const ListCrawlsRequest &other)
    : GlueRequest(new ListCrawlsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListCrawlsRequest object.
 */
ListCrawlsRequest::ListCrawlsRequest()
    : GlueRequest(new ListCrawlsRequestPrivate(GlueRequest::ListCrawlsAction, this))
{

}

/*!
 * \reimp
 */
bool ListCrawlsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListCrawlsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListCrawlsRequest::response(QNetworkReply * const reply) const
{
    return new ListCrawlsResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::ListCrawlsRequestPrivate
 * \brief The ListCrawlsRequestPrivate class provides private implementation for ListCrawlsRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a ListCrawlsRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
ListCrawlsRequestPrivate::ListCrawlsRequestPrivate(
    const GlueRequest::Action action, ListCrawlsRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListCrawlsRequest
 * class' copy constructor.
 */
ListCrawlsRequestPrivate::ListCrawlsRequestPrivate(
    const ListCrawlsRequestPrivate &other, ListCrawlsRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
