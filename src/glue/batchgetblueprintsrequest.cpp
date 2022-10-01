// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
