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

#include "describecertificatesrequest.h"
#include "describecertificatesrequest_p.h"
#include "describecertificatesresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::DescribeCertificatesRequest
 * \brief The DescribeCertificatesRequest class provides an interface for DocDB DescribeCertificates requests.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::describeCertificates
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeCertificatesRequest::DescribeCertificatesRequest(const DescribeCertificatesRequest &other)
    : DocDBRequest(new DescribeCertificatesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeCertificatesRequest object.
 */
DescribeCertificatesRequest::DescribeCertificatesRequest()
    : DocDBRequest(new DescribeCertificatesRequestPrivate(DocDBRequest::DescribeCertificatesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeCertificatesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeCertificatesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeCertificatesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeCertificatesResponse(*this, reply);
}

/*!
 * \class QtAws::DocDB::DescribeCertificatesRequestPrivate
 * \brief The DescribeCertificatesRequestPrivate class provides private implementation for DescribeCertificatesRequest.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a DescribeCertificatesRequestPrivate object for DocDB \a action,
 * with public implementation \a q.
 */
DescribeCertificatesRequestPrivate::DescribeCertificatesRequestPrivate(
    const DocDBRequest::Action action, DescribeCertificatesRequest * const q)
    : DocDBRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeCertificatesRequest
 * class' copy constructor.
 */
DescribeCertificatesRequestPrivate::DescribeCertificatesRequestPrivate(
    const DescribeCertificatesRequestPrivate &other, DescribeCertificatesRequest * const q)
    : DocDBRequestPrivate(other, q)
{

}

} // namespace DocDB
} // namespace QtAws
