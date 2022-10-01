// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteconnectionrequest.h"
#include "deleteconnectionrequest_p.h"
#include "deleteconnectionresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteConnectionRequest
 * \brief The DeleteConnectionRequest class provides an interface for Glue DeleteConnection requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::deleteConnection
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteConnectionRequest::DeleteConnectionRequest(const DeleteConnectionRequest &other)
    : GlueRequest(new DeleteConnectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteConnectionRequest object.
 */
DeleteConnectionRequest::DeleteConnectionRequest()
    : GlueRequest(new DeleteConnectionRequestPrivate(GlueRequest::DeleteConnectionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteConnectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteConnectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteConnectionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteConnectionResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::DeleteConnectionRequestPrivate
 * \brief The DeleteConnectionRequestPrivate class provides private implementation for DeleteConnectionRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteConnectionRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
DeleteConnectionRequestPrivate::DeleteConnectionRequestPrivate(
    const GlueRequest::Action action, DeleteConnectionRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteConnectionRequest
 * class' copy constructor.
 */
DeleteConnectionRequestPrivate::DeleteConnectionRequestPrivate(
    const DeleteConnectionRequestPrivate &other, DeleteConnectionRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
