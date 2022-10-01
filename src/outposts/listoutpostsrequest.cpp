// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listoutpostsrequest.h"
#include "listoutpostsrequest_p.h"
#include "listoutpostsresponse.h"
#include "outpostsrequest_p.h"

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::ListOutpostsRequest
 * \brief The ListOutpostsRequest class provides an interface for Outposts ListOutposts requests.
 *
 * \inmodule QtAwsOutposts
 *
 *  Amazon Web Services Outposts is a fully managed service that extends Amazon Web Services infrastructure, APIs, and tools
 *  to customer premises. By providing local access to Amazon Web Services managed infrastructure, Amazon Web Services
 *  Outposts enables customers to build and run applications on premises using the same programming interfaces as in Amazon
 *  Web Services Regions, while using local compute and storage resources for lower latency and local data processing
 *
 * \sa OutpostsClient::listOutposts
 */

/*!
 * Constructs a copy of \a other.
 */
ListOutpostsRequest::ListOutpostsRequest(const ListOutpostsRequest &other)
    : OutpostsRequest(new ListOutpostsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListOutpostsRequest object.
 */
ListOutpostsRequest::ListOutpostsRequest()
    : OutpostsRequest(new ListOutpostsRequestPrivate(OutpostsRequest::ListOutpostsAction, this))
{

}

/*!
 * \reimp
 */
bool ListOutpostsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListOutpostsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListOutpostsRequest::response(QNetworkReply * const reply) const
{
    return new ListOutpostsResponse(*this, reply);
}

/*!
 * \class QtAws::Outposts::ListOutpostsRequestPrivate
 * \brief The ListOutpostsRequestPrivate class provides private implementation for ListOutpostsRequest.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a ListOutpostsRequestPrivate object for Outposts \a action,
 * with public implementation \a q.
 */
ListOutpostsRequestPrivate::ListOutpostsRequestPrivate(
    const OutpostsRequest::Action action, ListOutpostsRequest * const q)
    : OutpostsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListOutpostsRequest
 * class' copy constructor.
 */
ListOutpostsRequestPrivate::ListOutpostsRequestPrivate(
    const ListOutpostsRequestPrivate &other, ListOutpostsRequest * const q)
    : OutpostsRequestPrivate(other, q)
{

}

} // namespace Outposts
} // namespace QtAws
