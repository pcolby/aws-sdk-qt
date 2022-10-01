// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getblueprintrunsrequest.h"
#include "getblueprintrunsrequest_p.h"
#include "getblueprintrunsresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetBlueprintRunsRequest
 * \brief The GetBlueprintRunsRequest class provides an interface for Glue GetBlueprintRuns requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getBlueprintRuns
 */

/*!
 * Constructs a copy of \a other.
 */
GetBlueprintRunsRequest::GetBlueprintRunsRequest(const GetBlueprintRunsRequest &other)
    : GlueRequest(new GetBlueprintRunsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBlueprintRunsRequest object.
 */
GetBlueprintRunsRequest::GetBlueprintRunsRequest()
    : GlueRequest(new GetBlueprintRunsRequestPrivate(GlueRequest::GetBlueprintRunsAction, this))
{

}

/*!
 * \reimp
 */
bool GetBlueprintRunsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBlueprintRunsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBlueprintRunsRequest::response(QNetworkReply * const reply) const
{
    return new GetBlueprintRunsResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetBlueprintRunsRequestPrivate
 * \brief The GetBlueprintRunsRequestPrivate class provides private implementation for GetBlueprintRunsRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetBlueprintRunsRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetBlueprintRunsRequestPrivate::GetBlueprintRunsRequestPrivate(
    const GlueRequest::Action action, GetBlueprintRunsRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBlueprintRunsRequest
 * class' copy constructor.
 */
GetBlueprintRunsRequestPrivate::GetBlueprintRunsRequestPrivate(
    const GetBlueprintRunsRequestPrivate &other, GetBlueprintRunsRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
