// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmappingrequest.h"
#include "getmappingrequest_p.h"
#include "getmappingresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetMappingRequest
 * \brief The GetMappingRequest class provides an interface for Glue GetMapping requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getMapping
 */

/*!
 * Constructs a copy of \a other.
 */
GetMappingRequest::GetMappingRequest(const GetMappingRequest &other)
    : GlueRequest(new GetMappingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMappingRequest object.
 */
GetMappingRequest::GetMappingRequest()
    : GlueRequest(new GetMappingRequestPrivate(GlueRequest::GetMappingAction, this))
{

}

/*!
 * \reimp
 */
bool GetMappingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMappingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMappingRequest::response(QNetworkReply * const reply) const
{
    return new GetMappingResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetMappingRequestPrivate
 * \brief The GetMappingRequestPrivate class provides private implementation for GetMappingRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetMappingRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetMappingRequestPrivate::GetMappingRequestPrivate(
    const GlueRequest::Action action, GetMappingRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMappingRequest
 * class' copy constructor.
 */
GetMappingRequestPrivate::GetMappingRequestPrivate(
    const GetMappingRequestPrivate &other, GetMappingRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
