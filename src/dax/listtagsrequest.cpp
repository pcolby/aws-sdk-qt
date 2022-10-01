// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtagsrequest.h"
#include "listtagsrequest_p.h"
#include "listtagsresponse.h"
#include "daxrequest_p.h"

namespace QtAws {
namespace Dax {

/*!
 * \class QtAws::Dax::ListTagsRequest
 * \brief The ListTagsRequest class provides an interface for Dax ListTags requests.
 *
 * \inmodule QtAwsDax
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DaxClient::listTags
 */

/*!
 * Constructs a copy of \a other.
 */
ListTagsRequest::ListTagsRequest(const ListTagsRequest &other)
    : DaxRequest(new ListTagsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTagsRequest object.
 */
ListTagsRequest::ListTagsRequest()
    : DaxRequest(new ListTagsRequestPrivate(DaxRequest::ListTagsAction, this))
{

}

/*!
 * \reimp
 */
bool ListTagsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTagsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTagsRequest::response(QNetworkReply * const reply) const
{
    return new ListTagsResponse(*this, reply);
}

/*!
 * \class QtAws::Dax::ListTagsRequestPrivate
 * \brief The ListTagsRequestPrivate class provides private implementation for ListTagsRequest.
 * \internal
 *
 * \inmodule QtAwsDax
 */

/*!
 * Constructs a ListTagsRequestPrivate object for Dax \a action,
 * with public implementation \a q.
 */
ListTagsRequestPrivate::ListTagsRequestPrivate(
    const DaxRequest::Action action, ListTagsRequest * const q)
    : DaxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTagsRequest
 * class' copy constructor.
 */
ListTagsRequestPrivate::ListTagsRequestPrivate(
    const ListTagsRequestPrivate &other, ListTagsRequest * const q)
    : DaxRequestPrivate(other, q)
{

}

} // namespace Dax
} // namespace QtAws
