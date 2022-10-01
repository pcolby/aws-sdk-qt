// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtagsforresourcerequest.h"
#include "listtagsforresourcerequest_p.h"
#include "listtagsforresourceresponse.h"
#include "qldbrequest_p.h"

namespace QtAws {
namespace Qldb {

/*!
 * \class QtAws::Qldb::ListTagsForResourceRequest
 * \brief The ListTagsForResourceRequest class provides an interface for Qldb ListTagsForResource requests.
 *
 * \inmodule QtAwsQldb
 *
 *  The control plane for Amazon
 *
 * \sa QldbClient::listTagsForResource
 */

/*!
 * Constructs a copy of \a other.
 */
ListTagsForResourceRequest::ListTagsForResourceRequest(const ListTagsForResourceRequest &other)
    : QldbRequest(new ListTagsForResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTagsForResourceRequest object.
 */
ListTagsForResourceRequest::ListTagsForResourceRequest()
    : QldbRequest(new ListTagsForResourceRequestPrivate(QldbRequest::ListTagsForResourceAction, this))
{

}

/*!
 * \reimp
 */
bool ListTagsForResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTagsForResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTagsForResourceRequest::response(QNetworkReply * const reply) const
{
    return new ListTagsForResourceResponse(*this, reply);
}

/*!
 * \class QtAws::Qldb::ListTagsForResourceRequestPrivate
 * \brief The ListTagsForResourceRequestPrivate class provides private implementation for ListTagsForResourceRequest.
 * \internal
 *
 * \inmodule QtAwsQldb
 */

/*!
 * Constructs a ListTagsForResourceRequestPrivate object for Qldb \a action,
 * with public implementation \a q.
 */
ListTagsForResourceRequestPrivate::ListTagsForResourceRequestPrivate(
    const QldbRequest::Action action, ListTagsForResourceRequest * const q)
    : QldbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTagsForResourceRequest
 * class' copy constructor.
 */
ListTagsForResourceRequestPrivate::ListTagsForResourceRequestPrivate(
    const ListTagsForResourceRequestPrivate &other, ListTagsForResourceRequest * const q)
    : QldbRequestPrivate(other, q)
{

}

} // namespace Qldb
} // namespace QtAws
