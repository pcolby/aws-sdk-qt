// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
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
 * Constructs a BatchDeleteConnectionRequestPrivate object for Glue \a action,
 * with public implementation \a q.
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
