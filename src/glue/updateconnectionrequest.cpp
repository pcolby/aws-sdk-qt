// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateconnectionrequest.h"
#include "updateconnectionrequest_p.h"
#include "updateconnectionresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateConnectionRequest
 * \brief The UpdateConnectionRequest class provides an interface for Glue UpdateConnection requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::updateConnection
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateConnectionRequest::UpdateConnectionRequest(const UpdateConnectionRequest &other)
    : GlueRequest(new UpdateConnectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateConnectionRequest object.
 */
UpdateConnectionRequest::UpdateConnectionRequest()
    : GlueRequest(new UpdateConnectionRequestPrivate(GlueRequest::UpdateConnectionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateConnectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateConnectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateConnectionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateConnectionResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::UpdateConnectionRequestPrivate
 * \brief The UpdateConnectionRequestPrivate class provides private implementation for UpdateConnectionRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdateConnectionRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
UpdateConnectionRequestPrivate::UpdateConnectionRequestPrivate(
    const GlueRequest::Action action, UpdateConnectionRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateConnectionRequest
 * class' copy constructor.
 */
UpdateConnectionRequestPrivate::UpdateConnectionRequestPrivate(
    const UpdateConnectionRequestPrivate &other, UpdateConnectionRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
