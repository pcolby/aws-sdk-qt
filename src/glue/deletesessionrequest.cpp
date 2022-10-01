// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletesessionrequest.h"
#include "deletesessionrequest_p.h"
#include "deletesessionresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteSessionRequest
 * \brief The DeleteSessionRequest class provides an interface for Glue DeleteSession requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::deleteSession
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSessionRequest::DeleteSessionRequest(const DeleteSessionRequest &other)
    : GlueRequest(new DeleteSessionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSessionRequest object.
 */
DeleteSessionRequest::DeleteSessionRequest()
    : GlueRequest(new DeleteSessionRequestPrivate(GlueRequest::DeleteSessionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSessionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSessionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSessionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSessionResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::DeleteSessionRequestPrivate
 * \brief The DeleteSessionRequestPrivate class provides private implementation for DeleteSessionRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteSessionRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
DeleteSessionRequestPrivate::DeleteSessionRequestPrivate(
    const GlueRequest::Action action, DeleteSessionRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSessionRequest
 * class' copy constructor.
 */
DeleteSessionRequestPrivate::DeleteSessionRequestPrivate(
    const DeleteSessionRequestPrivate &other, DeleteSessionRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
