// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createregistryrequest.h"
#include "createregistryrequest_p.h"
#include "createregistryresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreateRegistryRequest
 * \brief The CreateRegistryRequest class provides an interface for Glue CreateRegistry requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::createRegistry
 */

/*!
 * Constructs a copy of \a other.
 */
CreateRegistryRequest::CreateRegistryRequest(const CreateRegistryRequest &other)
    : GlueRequest(new CreateRegistryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateRegistryRequest object.
 */
CreateRegistryRequest::CreateRegistryRequest()
    : GlueRequest(new CreateRegistryRequestPrivate(GlueRequest::CreateRegistryAction, this))
{

}

/*!
 * \reimp
 */
bool CreateRegistryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateRegistryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateRegistryRequest::response(QNetworkReply * const reply) const
{
    return new CreateRegistryResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::CreateRegistryRequestPrivate
 * \brief The CreateRegistryRequestPrivate class provides private implementation for CreateRegistryRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CreateRegistryRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
CreateRegistryRequestPrivate::CreateRegistryRequestPrivate(
    const GlueRequest::Action action, CreateRegistryRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateRegistryRequest
 * class' copy constructor.
 */
CreateRegistryRequestPrivate::CreateRegistryRequestPrivate(
    const CreateRegistryRequestPrivate &other, CreateRegistryRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
