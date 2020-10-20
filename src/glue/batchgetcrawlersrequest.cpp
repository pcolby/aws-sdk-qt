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

#include "batchgetcrawlersrequest.h"
#include "batchgetcrawlersrequest_p.h"
#include "batchgetcrawlersresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::BatchGetCrawlersRequest
 * \brief The BatchGetCrawlersRequest class provides an interface for Glue BatchGetCrawlers requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::batchGetCrawlers
 */

/*!
 * Constructs a copy of \a other.
 */
BatchGetCrawlersRequest::BatchGetCrawlersRequest(const BatchGetCrawlersRequest &other)
    : GlueRequest(new BatchGetCrawlersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchGetCrawlersRequest object.
 */
BatchGetCrawlersRequest::BatchGetCrawlersRequest()
    : GlueRequest(new BatchGetCrawlersRequestPrivate(GlueRequest::BatchGetCrawlersAction, this))
{

}

/*!
 * \reimp
 */
bool BatchGetCrawlersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchGetCrawlersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchGetCrawlersRequest::response(QNetworkReply * const reply) const
{
    return new BatchGetCrawlersResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::BatchGetCrawlersRequestPrivate
 * \brief The BatchGetCrawlersRequestPrivate class provides private implementation for BatchGetCrawlersRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a BatchGetCrawlersRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
BatchGetCrawlersRequestPrivate::BatchGetCrawlersRequestPrivate(
    const GlueRequest::Action action, BatchGetCrawlersRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchGetCrawlersRequest
 * class' copy constructor.
 */
BatchGetCrawlersRequestPrivate::BatchGetCrawlersRequestPrivate(
    const BatchGetCrawlersRequestPrivate &other, BatchGetCrawlersRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
