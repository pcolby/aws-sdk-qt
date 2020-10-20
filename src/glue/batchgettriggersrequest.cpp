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

#include "batchgettriggersrequest.h"
#include "batchgettriggersrequest_p.h"
#include "batchgettriggersresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::BatchGetTriggersRequest
 * \brief The BatchGetTriggersRequest class provides an interface for Glue BatchGetTriggers requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::batchGetTriggers
 */

/*!
 * Constructs a copy of \a other.
 */
BatchGetTriggersRequest::BatchGetTriggersRequest(const BatchGetTriggersRequest &other)
    : GlueRequest(new BatchGetTriggersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchGetTriggersRequest object.
 */
BatchGetTriggersRequest::BatchGetTriggersRequest()
    : GlueRequest(new BatchGetTriggersRequestPrivate(GlueRequest::BatchGetTriggersAction, this))
{

}

/*!
 * \reimp
 */
bool BatchGetTriggersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchGetTriggersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchGetTriggersRequest::response(QNetworkReply * const reply) const
{
    return new BatchGetTriggersResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::BatchGetTriggersRequestPrivate
 * \brief The BatchGetTriggersRequestPrivate class provides private implementation for BatchGetTriggersRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a BatchGetTriggersRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
BatchGetTriggersRequestPrivate::BatchGetTriggersRequestPrivate(
    const GlueRequest::Action action, BatchGetTriggersRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchGetTriggersRequest
 * class' copy constructor.
 */
BatchGetTriggersRequestPrivate::BatchGetTriggersRequestPrivate(
    const BatchGetTriggersRequestPrivate &other, BatchGetTriggersRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
