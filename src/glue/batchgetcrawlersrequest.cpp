// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
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
