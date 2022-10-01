// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteregistryrequest.h"
#include "deleteregistryrequest_p.h"
#include "deleteregistryresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteRegistryRequest
 * \brief The DeleteRegistryRequest class provides an interface for Glue DeleteRegistry requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::deleteRegistry
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteRegistryRequest::DeleteRegistryRequest(const DeleteRegistryRequest &other)
    : GlueRequest(new DeleteRegistryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteRegistryRequest object.
 */
DeleteRegistryRequest::DeleteRegistryRequest()
    : GlueRequest(new DeleteRegistryRequestPrivate(GlueRequest::DeleteRegistryAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteRegistryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteRegistryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRegistryRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRegistryResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::DeleteRegistryRequestPrivate
 * \brief The DeleteRegistryRequestPrivate class provides private implementation for DeleteRegistryRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteRegistryRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
DeleteRegistryRequestPrivate::DeleteRegistryRequestPrivate(
    const GlueRequest::Action action, DeleteRegistryRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteRegistryRequest
 * class' copy constructor.
 */
DeleteRegistryRequestPrivate::DeleteRegistryRequestPrivate(
    const DeleteRegistryRequestPrivate &other, DeleteRegistryRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
