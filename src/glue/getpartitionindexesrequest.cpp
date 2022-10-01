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

#include "getpartitionindexesrequest.h"
#include "getpartitionindexesrequest_p.h"
#include "getpartitionindexesresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetPartitionIndexesRequest
 * \brief The GetPartitionIndexesRequest class provides an interface for Glue GetPartitionIndexes requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getPartitionIndexes
 */

/*!
 * Constructs a copy of \a other.
 */
GetPartitionIndexesRequest::GetPartitionIndexesRequest(const GetPartitionIndexesRequest &other)
    : GlueRequest(new GetPartitionIndexesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetPartitionIndexesRequest object.
 */
GetPartitionIndexesRequest::GetPartitionIndexesRequest()
    : GlueRequest(new GetPartitionIndexesRequestPrivate(GlueRequest::GetPartitionIndexesAction, this))
{

}

/*!
 * \reimp
 */
bool GetPartitionIndexesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetPartitionIndexesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetPartitionIndexesRequest::response(QNetworkReply * const reply) const
{
    return new GetPartitionIndexesResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetPartitionIndexesRequestPrivate
 * \brief The GetPartitionIndexesRequestPrivate class provides private implementation for GetPartitionIndexesRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetPartitionIndexesRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetPartitionIndexesRequestPrivate::GetPartitionIndexesRequestPrivate(
    const GlueRequest::Action action, GetPartitionIndexesRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetPartitionIndexesRequest
 * class' copy constructor.
 */
GetPartitionIndexesRequestPrivate::GetPartitionIndexesRequestPrivate(
    const GetPartitionIndexesRequestPrivate &other, GetPartitionIndexesRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
