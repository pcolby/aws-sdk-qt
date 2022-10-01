// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
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
