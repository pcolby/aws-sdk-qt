// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getregistryrequest.h"
#include "getregistryrequest_p.h"
#include "getregistryresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetRegistryRequest
 * \brief The GetRegistryRequest class provides an interface for Glue GetRegistry requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getRegistry
 */

/*!
 * Constructs a copy of \a other.
 */
GetRegistryRequest::GetRegistryRequest(const GetRegistryRequest &other)
    : GlueRequest(new GetRegistryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRegistryRequest object.
 */
GetRegistryRequest::GetRegistryRequest()
    : GlueRequest(new GetRegistryRequestPrivate(GlueRequest::GetRegistryAction, this))
{

}

/*!
 * \reimp
 */
bool GetRegistryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetRegistryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRegistryRequest::response(QNetworkReply * const reply) const
{
    return new GetRegistryResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetRegistryRequestPrivate
 * \brief The GetRegistryRequestPrivate class provides private implementation for GetRegistryRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetRegistryRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetRegistryRequestPrivate::GetRegistryRequestPrivate(
    const GlueRequest::Action action, GetRegistryRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRegistryRequest
 * class' copy constructor.
 */
GetRegistryRequestPrivate::GetRegistryRequestPrivate(
    const GetRegistryRequestPrivate &other, GetRegistryRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
