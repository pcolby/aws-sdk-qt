// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatetriggerrequest.h"
#include "updatetriggerrequest_p.h"
#include "updatetriggerresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateTriggerRequest
 * \brief The UpdateTriggerRequest class provides an interface for Glue UpdateTrigger requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::updateTrigger
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateTriggerRequest::UpdateTriggerRequest(const UpdateTriggerRequest &other)
    : GlueRequest(new UpdateTriggerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateTriggerRequest object.
 */
UpdateTriggerRequest::UpdateTriggerRequest()
    : GlueRequest(new UpdateTriggerRequestPrivate(GlueRequest::UpdateTriggerAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateTriggerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateTriggerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateTriggerRequest::response(QNetworkReply * const reply) const
{
    return new UpdateTriggerResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::UpdateTriggerRequestPrivate
 * \brief The UpdateTriggerRequestPrivate class provides private implementation for UpdateTriggerRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdateTriggerRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
UpdateTriggerRequestPrivate::UpdateTriggerRequestPrivate(
    const GlueRequest::Action action, UpdateTriggerRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateTriggerRequest
 * class' copy constructor.
 */
UpdateTriggerRequestPrivate::UpdateTriggerRequestPrivate(
    const UpdateTriggerRequestPrivate &other, UpdateTriggerRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
