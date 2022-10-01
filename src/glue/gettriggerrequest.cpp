// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettriggerrequest.h"
#include "gettriggerrequest_p.h"
#include "gettriggerresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetTriggerRequest
 * \brief The GetTriggerRequest class provides an interface for Glue GetTrigger requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getTrigger
 */

/*!
 * Constructs a copy of \a other.
 */
GetTriggerRequest::GetTriggerRequest(const GetTriggerRequest &other)
    : GlueRequest(new GetTriggerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTriggerRequest object.
 */
GetTriggerRequest::GetTriggerRequest()
    : GlueRequest(new GetTriggerRequestPrivate(GlueRequest::GetTriggerAction, this))
{

}

/*!
 * \reimp
 */
bool GetTriggerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTriggerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTriggerRequest::response(QNetworkReply * const reply) const
{
    return new GetTriggerResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetTriggerRequestPrivate
 * \brief The GetTriggerRequestPrivate class provides private implementation for GetTriggerRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetTriggerRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetTriggerRequestPrivate::GetTriggerRequestPrivate(
    const GlueRequest::Action action, GetTriggerRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTriggerRequest
 * class' copy constructor.
 */
GetTriggerRequestPrivate::GetTriggerRequestPrivate(
    const GetTriggerRequestPrivate &other, GetTriggerRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
