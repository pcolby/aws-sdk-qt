// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchjobsrequest.h"
#include "searchjobsrequest_p.h"
#include "searchjobsresponse.h"
#include "braketrequest_p.h"

namespace QtAws {
namespace Braket {

/*!
 * \class QtAws::Braket::SearchJobsRequest
 * \brief The SearchJobsRequest class provides an interface for Braket SearchJobs requests.
 *
 * \inmodule QtAwsBraket
 *
 *  The Amazon Braket API Reference provides information about the operations and structures supported in Amazon
 * 
 *  Braket>
 * 
 *  Additional
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/braket/latest/developerguide/what-is-braket.html">Amazon Braket Developer Guide</a>
 *
 * \sa BraketClient::searchJobs
 */

/*!
 * Constructs a copy of \a other.
 */
SearchJobsRequest::SearchJobsRequest(const SearchJobsRequest &other)
    : BraketRequest(new SearchJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SearchJobsRequest object.
 */
SearchJobsRequest::SearchJobsRequest()
    : BraketRequest(new SearchJobsRequestPrivate(BraketRequest::SearchJobsAction, this))
{

}

/*!
 * \reimp
 */
bool SearchJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SearchJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SearchJobsRequest::response(QNetworkReply * const reply) const
{
    return new SearchJobsResponse(*this, reply);
}

/*!
 * \class QtAws::Braket::SearchJobsRequestPrivate
 * \brief The SearchJobsRequestPrivate class provides private implementation for SearchJobsRequest.
 * \internal
 *
 * \inmodule QtAwsBraket
 */

/*!
 * Constructs a SearchJobsRequestPrivate object for Braket \a action,
 * with public implementation \a q.
 */
SearchJobsRequestPrivate::SearchJobsRequestPrivate(
    const BraketRequest::Action action, SearchJobsRequest * const q)
    : BraketRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SearchJobsRequest
 * class' copy constructor.
 */
SearchJobsRequestPrivate::SearchJobsRequestPrivate(
    const SearchJobsRequestPrivate &other, SearchJobsRequest * const q)
    : BraketRequestPrivate(other, q)
{

}

} // namespace Braket
} // namespace QtAws
