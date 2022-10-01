// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletetriggerrequest.h"
#include "deletetriggerrequest_p.h"
#include "deletetriggerresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteTriggerRequest
 * \brief The DeleteTriggerRequest class provides an interface for Glue DeleteTrigger requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::deleteTrigger
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteTriggerRequest::DeleteTriggerRequest(const DeleteTriggerRequest &other)
    : GlueRequest(new DeleteTriggerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteTriggerRequest object.
 */
DeleteTriggerRequest::DeleteTriggerRequest()
    : GlueRequest(new DeleteTriggerRequestPrivate(GlueRequest::DeleteTriggerAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteTriggerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteTriggerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteTriggerRequest::response(QNetworkReply * const reply) const
{
    return new DeleteTriggerResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::DeleteTriggerRequestPrivate
 * \brief The DeleteTriggerRequestPrivate class provides private implementation for DeleteTriggerRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteTriggerRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
DeleteTriggerRequestPrivate::DeleteTriggerRequestPrivate(
    const GlueRequest::Action action, DeleteTriggerRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteTriggerRequest
 * class' copy constructor.
 */
DeleteTriggerRequestPrivate::DeleteTriggerRequestPrivate(
    const DeleteTriggerRequestPrivate &other, DeleteTriggerRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
