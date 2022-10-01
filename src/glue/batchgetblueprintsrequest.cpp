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

#include "batchgetblueprintsrequest.h"
#include "batchgetblueprintsrequest_p.h"
#include "batchgetblueprintsresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::BatchGetBlueprintsRequest
 * \brief The BatchGetBlueprintsRequest class provides an interface for Glue BatchGetBlueprints requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::batchGetBlueprints
 */

/*!
 * Constructs a copy of \a other.
 */
BatchGetBlueprintsRequest::BatchGetBlueprintsRequest(const BatchGetBlueprintsRequest &other)
    : GlueRequest(new BatchGetBlueprintsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchGetBlueprintsRequest object.
 */
BatchGetBlueprintsRequest::BatchGetBlueprintsRequest()
    : GlueRequest(new BatchGetBlueprintsRequestPrivate(GlueRequest::BatchGetBlueprintsAction, this))
{

}

/*!
 * \reimp
 */
bool BatchGetBlueprintsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchGetBlueprintsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchGetBlueprintsRequest::response(QNetworkReply * const reply) const
{
    return new BatchGetBlueprintsResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::BatchGetBlueprintsRequestPrivate
 * \brief The BatchGetBlueprintsRequestPrivate class provides private implementation for BatchGetBlueprintsRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a BatchGetBlueprintsRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
BatchGetBlueprintsRequestPrivate::BatchGetBlueprintsRequestPrivate(
    const GlueRequest::Action action, BatchGetBlueprintsRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchGetBlueprintsRequest
 * class' copy constructor.
 */
BatchGetBlueprintsRequestPrivate::BatchGetBlueprintsRequestPrivate(
    const BatchGetBlueprintsRequestPrivate &other, BatchGetBlueprintsRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
