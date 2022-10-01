// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getplanrequest.h"
#include "getplanrequest_p.h"
#include "getplanresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetPlanRequest
 * \brief The GetPlanRequest class provides an interface for Glue GetPlan requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getPlan
 */

/*!
 * Constructs a copy of \a other.
 */
GetPlanRequest::GetPlanRequest(const GetPlanRequest &other)
    : GlueRequest(new GetPlanRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetPlanRequest object.
 */
GetPlanRequest::GetPlanRequest()
    : GlueRequest(new GetPlanRequestPrivate(GlueRequest::GetPlanAction, this))
{

}

/*!
 * \reimp
 */
bool GetPlanRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetPlanResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetPlanRequest::response(QNetworkReply * const reply) const
{
    return new GetPlanResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetPlanRequestPrivate
 * \brief The GetPlanRequestPrivate class provides private implementation for GetPlanRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetPlanRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetPlanRequestPrivate::GetPlanRequestPrivate(
    const GlueRequest::Action action, GetPlanRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetPlanRequest
 * class' copy constructor.
 */
GetPlanRequestPrivate::GetPlanRequestPrivate(
    const GetPlanRequestPrivate &other, GetPlanRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
