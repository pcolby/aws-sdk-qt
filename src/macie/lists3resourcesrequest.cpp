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
 *  <fullname>Amazon Macie</fullname>
 * 
 *  Amazon Macie is a security service that uses machine learning to automatically discover, classify, and protect sensitive
 *  data in AWS. Macie recognizes sensitive data such as personally identifiable information (PII) or intellectual property,
 *  and provides you with dashboards and alerts that give visibility into how this data is being accessed or moved. For more
 *  information, see the <a href="https://docs.aws.amazon.com/macie/latest/userguide/what-is-macie.html">Macie User
 *  Guide</a>.
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
