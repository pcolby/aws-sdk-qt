// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
