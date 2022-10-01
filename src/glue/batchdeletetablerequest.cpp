// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchdeletetablerequest.h"
#include "batchdeletetablerequest_p.h"
#include "batchdeletetableresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::BatchDeleteTableRequest
 * \brief The BatchDeleteTableRequest class provides an interface for Glue BatchDeleteTable requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::batchDeleteTable
 */

/*!
 * Constructs a copy of \a other.
 */
BatchDeleteTableRequest::BatchDeleteTableRequest(const BatchDeleteTableRequest &other)
    : GlueRequest(new BatchDeleteTableRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchDeleteTableRequest object.
 */
BatchDeleteTableRequest::BatchDeleteTableRequest()
    : GlueRequest(new BatchDeleteTableRequestPrivate(GlueRequest::BatchDeleteTableAction, this))
{

}

/*!
 * \reimp
 */
bool BatchDeleteTableRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchDeleteTableResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchDeleteTableRequest::response(QNetworkReply * const reply) const
{
    return new BatchDeleteTableResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::BatchDeleteTableRequestPrivate
 * \brief The BatchDeleteTableRequestPrivate class provides private implementation for BatchDeleteTableRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a BatchDeleteTableRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
BatchDeleteTableRequestPrivate::BatchDeleteTableRequestPrivate(
    const GlueRequest::Action action, BatchDeleteTableRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchDeleteTableRequest
 * class' copy constructor.
 */
BatchDeleteTableRequestPrivate::BatchDeleteTableRequestPrivate(
    const BatchDeleteTableRequestPrivate &other, BatchDeleteTableRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
