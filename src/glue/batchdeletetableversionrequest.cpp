// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
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
