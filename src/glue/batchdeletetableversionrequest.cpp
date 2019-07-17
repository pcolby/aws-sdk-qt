/*
    Copyright 2013-2019 Paul Colby

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

#include "batchdeletetableversionrequest.h"
#include "batchdeletetableversionrequest_p.h"
#include "batchdeletetableversionresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::BatchDeleteTableVersionRequest
 * \brief The BatchDeleteTableVersionRequest class provides an interface for Glue BatchDeleteTableVersion requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::batchDeleteTableVersion
 */

/*!
 * Constructs a copy of \a other.
 */
BatchDeleteTableVersionRequest::BatchDeleteTableVersionRequest(const BatchDeleteTableVersionRequest &other)
    : GlueRequest(new BatchDeleteTableVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchDeleteTableVersionRequest object.
 */
BatchDeleteTableVersionRequest::BatchDeleteTableVersionRequest()
    : GlueRequest(new BatchDeleteTableVersionRequestPrivate(GlueRequest::BatchDeleteTableVersionAction, this))
{

}

/*!
 * \reimp
 */
bool BatchDeleteTableVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchDeleteTableVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchDeleteTableVersionRequest::response(QNetworkReply * const reply) const
{
    return new BatchDeleteTableVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::BatchDeleteTableVersionRequestPrivate
 * \brief The BatchDeleteTableVersionRequestPrivate class provides private implementation for BatchDeleteTableVersionRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a BatchDeleteTableVersionRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
BatchDeleteTableVersionRequestPrivate::BatchDeleteTableVersionRequestPrivate(
    const GlueRequest::Action action, BatchDeleteTableVersionRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchDeleteTableVersionRequest
 * class' copy constructor.
 */
BatchDeleteTableVersionRequestPrivate::BatchDeleteTableVersionRequestPrivate(
    const BatchDeleteTableVersionRequestPrivate &other, BatchDeleteTableVersionRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
