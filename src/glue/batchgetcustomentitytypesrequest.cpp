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

#include "batchgetcustomentitytypesrequest.h"
#include "batchgetcustomentitytypesrequest_p.h"
#include "batchgetcustomentitytypesresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::BatchGetCustomEntityTypesRequest
 * \brief The BatchGetCustomEntityTypesRequest class provides an interface for Glue BatchGetCustomEntityTypes requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::batchGetCustomEntityTypes
 */

/*!
 * Constructs a copy of \a other.
 */
BatchGetCustomEntityTypesRequest::BatchGetCustomEntityTypesRequest(const BatchGetCustomEntityTypesRequest &other)
    : GlueRequest(new BatchGetCustomEntityTypesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchGetCustomEntityTypesRequest object.
 */
BatchGetCustomEntityTypesRequest::BatchGetCustomEntityTypesRequest()
    : GlueRequest(new BatchGetCustomEntityTypesRequestPrivate(GlueRequest::BatchGetCustomEntityTypesAction, this))
{

}

/*!
 * \reimp
 */
bool BatchGetCustomEntityTypesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchGetCustomEntityTypesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchGetCustomEntityTypesRequest::response(QNetworkReply * const reply) const
{
    return new BatchGetCustomEntityTypesResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::BatchGetCustomEntityTypesRequestPrivate
 * \brief The BatchGetCustomEntityTypesRequestPrivate class provides private implementation for BatchGetCustomEntityTypesRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a BatchGetCustomEntityTypesRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
BatchGetCustomEntityTypesRequestPrivate::BatchGetCustomEntityTypesRequestPrivate(
    const GlueRequest::Action action, BatchGetCustomEntityTypesRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchGetCustomEntityTypesRequest
 * class' copy constructor.
 */
BatchGetCustomEntityTypesRequestPrivate::BatchGetCustomEntityTypesRequestPrivate(
    const BatchGetCustomEntityTypesRequestPrivate &other, BatchGetCustomEntityTypesRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
