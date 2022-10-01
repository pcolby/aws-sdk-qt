// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateregistryrequest.h"
#include "updateregistryrequest_p.h"
#include "updateregistryresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateRegistryRequest
 * \brief The UpdateRegistryRequest class provides an interface for Glue UpdateRegistry requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::updateRegistry
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateRegistryRequest::UpdateRegistryRequest(const UpdateRegistryRequest &other)
    : GlueRequest(new UpdateRegistryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateRegistryRequest object.
 */
UpdateRegistryRequest::UpdateRegistryRequest()
    : GlueRequest(new UpdateRegistryRequestPrivate(GlueRequest::UpdateRegistryAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateRegistryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateRegistryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateRegistryRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRegistryResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::UpdateRegistryRequestPrivate
 * \brief The UpdateRegistryRequestPrivate class provides private implementation for UpdateRegistryRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdateRegistryRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
UpdateRegistryRequestPrivate::UpdateRegistryRequestPrivate(
    const GlueRequest::Action action, UpdateRegistryRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateRegistryRequest
 * class' copy constructor.
 */
UpdateRegistryRequestPrivate::UpdateRegistryRequestPrivate(
    const UpdateRegistryRequestPrivate &other, UpdateRegistryRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
