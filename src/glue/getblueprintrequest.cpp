// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getblueprintrequest.h"
#include "getblueprintrequest_p.h"
#include "getblueprintresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetBlueprintRequest
 * \brief The GetBlueprintRequest class provides an interface for Glue GetBlueprint requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getBlueprint
 */

/*!
 * Constructs a copy of \a other.
 */
GetBlueprintRequest::GetBlueprintRequest(const GetBlueprintRequest &other)
    : GlueRequest(new GetBlueprintRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBlueprintRequest object.
 */
GetBlueprintRequest::GetBlueprintRequest()
    : GlueRequest(new GetBlueprintRequestPrivate(GlueRequest::GetBlueprintAction, this))
{

}

/*!
 * \reimp
 */
bool GetBlueprintRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBlueprintResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBlueprintRequest::response(QNetworkReply * const reply) const
{
    return new GetBlueprintResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetBlueprintRequestPrivate
 * \brief The GetBlueprintRequestPrivate class provides private implementation for GetBlueprintRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetBlueprintRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetBlueprintRequestPrivate::GetBlueprintRequestPrivate(
    const GlueRequest::Action action, GetBlueprintRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBlueprintRequest
 * class' copy constructor.
 */
GetBlueprintRequestPrivate::GetBlueprintRequestPrivate(
    const GetBlueprintRequestPrivate &other, GetBlueprintRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
