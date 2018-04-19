/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "batchdeleteconnectionrequest.h"
#include "batchdeleteconnectionrequest_p.h"
#include "batchdeleteconnectionresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::BatchDeleteConnectionRequest
 * \brief The BatchDeleteConnectionRequest class provides an interface for Glue BatchDeleteConnection requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::batchDeleteConnection
 */

/*!
 * Constructs a copy of \a other.
 */
BatchDeleteConnectionRequest::BatchDeleteConnectionRequest(const BatchDeleteConnectionRequest &other)
    : GlueRequest(new BatchDeleteConnectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchDeleteConnectionRequest object.
 */
BatchDeleteConnectionRequest::BatchDeleteConnectionRequest()
    : GlueRequest(new BatchDeleteConnectionRequestPrivate(GlueRequest::BatchDeleteConnectionAction, this))
{

}

/*!
 * \reimp
 */
bool BatchDeleteConnectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchDeleteConnectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchDeleteConnectionRequest::response(QNetworkReply * const reply) const
{
    return new BatchDeleteConnectionResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::BatchDeleteConnectionRequestPrivate
 * \brief The BatchDeleteConnectionRequestPrivate class provides private implementation for BatchDeleteConnectionRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 *
 * Constructs a BatchDeleteConnectionRequestPrivate object for Glue \a action with,
 * public implementation \a q.
 */
BatchDeleteConnectionRequestPrivate::BatchDeleteConnectionRequestPrivate(
    const GlueRequest::Action action, BatchDeleteConnectionRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchDeleteConnectionRequest
 * class' copy constructor.
 */
BatchDeleteConnectionRequestPrivate::BatchDeleteConnectionRequestPrivate(
    const BatchDeleteConnectionRequestPrivate &other, BatchDeleteConnectionRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
