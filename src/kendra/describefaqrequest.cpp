/*
    Copyright 2013-2021 Paul Colby

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

#include "describefaqrequest.h"
#include "describefaqrequest_p.h"
#include "describefaqresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace kendra {

/*!
 * \class QtAws::kendra::DescribeFaqRequest
 * \brief The DescribeFaqRequest class provides an interface for kendra DescribeFaq requests.
 *
 * \inmodule QtAwskendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa kendraClient::describeFaq
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeFaqRequest::DescribeFaqRequest(const DescribeFaqRequest &other)
    : kendraRequest(new DescribeFaqRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeFaqRequest object.
 */
DescribeFaqRequest::DescribeFaqRequest()
    : kendraRequest(new DescribeFaqRequestPrivate(kendraRequest::DescribeFaqAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeFaqRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeFaqResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeFaqRequest::response(QNetworkReply * const reply) const
{
    return new DescribeFaqResponse(*this, reply);
}

/*!
 * \class QtAws::kendra::DescribeFaqRequestPrivate
 * \brief The DescribeFaqRequestPrivate class provides private implementation for DescribeFaqRequest.
 * \internal
 *
 * \inmodule QtAwskendra
 */

/*!
 * Constructs a DescribeFaqRequestPrivate object for kendra \a action,
 * with public implementation \a q.
 */
DescribeFaqRequestPrivate::DescribeFaqRequestPrivate(
    const kendraRequest::Action action, DescribeFaqRequest * const q)
    : kendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeFaqRequest
 * class' copy constructor.
 */
DescribeFaqRequestPrivate::DescribeFaqRequestPrivate(
    const DescribeFaqRequestPrivate &other, DescribeFaqRequest * const q)
    : kendraRequestPrivate(other, q)
{

}

} // namespace kendra
} // namespace QtAws
