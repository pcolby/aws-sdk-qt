// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletetableversionrequest.h"
#include "deletetableversionrequest_p.h"
#include "deletetableversionresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteTableVersionRequest
 * \brief The DeleteTableVersionRequest class provides an interface for Glue DeleteTableVersion requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::deleteTableVersion
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteTableVersionRequest::DeleteTableVersionRequest(const DeleteTableVersionRequest &other)
    : GlueRequest(new DeleteTableVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteTableVersionRequest object.
 */
DeleteTableVersionRequest::DeleteTableVersionRequest()
    : GlueRequest(new DeleteTableVersionRequestPrivate(GlueRequest::DeleteTableVersionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteTableVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteTableVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteTableVersionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteTableVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::DeleteTableVersionRequestPrivate
 * \brief The DeleteTableVersionRequestPrivate class provides private implementation for DeleteTableVersionRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteTableVersionRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
DeleteTableVersionRequestPrivate::DeleteTableVersionRequestPrivate(
    const GlueRequest::Action action, DeleteTableVersionRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteTableVersionRequest
 * class' copy constructor.
 */
DeleteTableVersionRequestPrivate::DeleteTableVersionRequestPrivate(
    const DeleteTableVersionRequestPrivate &other, DeleteTableVersionRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
