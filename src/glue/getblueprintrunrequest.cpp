// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getblueprintrunrequest.h"
#include "getblueprintrunrequest_p.h"
#include "getblueprintrunresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetBlueprintRunRequest
 * \brief The GetBlueprintRunRequest class provides an interface for Glue GetBlueprintRun requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getBlueprintRun
 */

/*!
 * Constructs a copy of \a other.
 */
GetBlueprintRunRequest::GetBlueprintRunRequest(const GetBlueprintRunRequest &other)
    : GlueRequest(new GetBlueprintRunRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBlueprintRunRequest object.
 */
GetBlueprintRunRequest::GetBlueprintRunRequest()
    : GlueRequest(new GetBlueprintRunRequestPrivate(GlueRequest::GetBlueprintRunAction, this))
{

}

/*!
 * \reimp
 */
bool GetBlueprintRunRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBlueprintRunResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBlueprintRunRequest::response(QNetworkReply * const reply) const
{
    return new GetBlueprintRunResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetBlueprintRunRequestPrivate
 * \brief The GetBlueprintRunRequestPrivate class provides private implementation for GetBlueprintRunRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetBlueprintRunRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetBlueprintRunRequestPrivate::GetBlueprintRunRequestPrivate(
    const GlueRequest::Action action, GetBlueprintRunRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBlueprintRunRequest
 * class' copy constructor.
 */
GetBlueprintRunRequestPrivate::GetBlueprintRunRequestPrivate(
    const GetBlueprintRunRequestPrivate &other, GetBlueprintRunRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
