// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "lists3resourcesrequest.h"
#include "lists3resourcesrequest_p.h"
#include "lists3resourcesresponse.h"
#include "macierequest_p.h"

namespace QtAws {
namespace Macie {

/*!
 * \class QtAws::Macie::ListS3ResourcesRequest
 * \brief The ListS3ResourcesRequest class provides an interface for Macie ListS3Resources requests.
 *
 * \inmodule QtAwsMacie
 *
 *  <fullname>Amazon Macie Classic</fullname>
 * 
 *  Amazon Macie Classic has been discontinued and is no longer
 * 
 *  available>
 * 
 *  A new Amazon Macie is now available with significant design improvements and additional features, at a lower price and
 *  in most Amazon Web Services Regions. We encourage you to take advantage of the new and improved features, and benefit
 *  from the reduced cost. To learn about features and pricing for the new Macie, see <a
 *  href="http://aws.amazon.com/macie/">Amazon Macie</a>. To learn how to use the new Macie, see the <a
 *  href="https://docs.aws.amazon.com/macie/latest/user/what-is-macie.html">Amazon Macie User
 *
 * \sa MacieClient::listS3Resources
 */

/*!
 * Constructs a copy of \a other.
 */
ListS3ResourcesRequest::ListS3ResourcesRequest(const ListS3ResourcesRequest &other)
    : MacieRequest(new ListS3ResourcesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListS3ResourcesRequest object.
 */
ListS3ResourcesRequest::ListS3ResourcesRequest()
    : MacieRequest(new ListS3ResourcesRequestPrivate(MacieRequest::ListS3ResourcesAction, this))
{

}

/*!
 * \reimp
 */
bool ListS3ResourcesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListS3ResourcesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListS3ResourcesRequest::response(QNetworkReply * const reply) const
{
    return new ListS3ResourcesResponse(*this, reply);
}

/*!
 * \class QtAws::Macie::ListS3ResourcesRequestPrivate
 * \brief The ListS3ResourcesRequestPrivate class provides private implementation for ListS3ResourcesRequest.
 * \internal
 *
 * \inmodule QtAwsMacie
 */

/*!
 * Constructs a ListS3ResourcesRequestPrivate object for Macie \a action,
 * with public implementation \a q.
 */
ListS3ResourcesRequestPrivate::ListS3ResourcesRequestPrivate(
    const MacieRequest::Action action, ListS3ResourcesRequest * const q)
    : MacieRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListS3ResourcesRequest
 * class' copy constructor.
 */
ListS3ResourcesRequestPrivate::ListS3ResourcesRequestPrivate(
    const ListS3ResourcesRequestPrivate &other, ListS3ResourcesRequest * const q)
    : MacieRequestPrivate(other, q)
{

}

} // namespace Macie
} // namespace QtAws
