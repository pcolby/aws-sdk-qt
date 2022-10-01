// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettriggersrequest.h"
#include "gettriggersrequest_p.h"
#include "gettriggersresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetTriggersRequest
 * \brief The GetTriggersRequest class provides an interface for Glue GetTriggers requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getTriggers
 */

/*!
 * Constructs a copy of \a other.
 */
GetTriggersRequest::GetTriggersRequest(const GetTriggersRequest &other)
    : GlueRequest(new GetTriggersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTriggersRequest object.
 */
GetTriggersRequest::GetTriggersRequest()
    : GlueRequest(new GetTriggersRequestPrivate(GlueRequest::GetTriggersAction, this))
{

}

/*!
 * \reimp
 */
bool GetTriggersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTriggersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTriggersRequest::response(QNetworkReply * const reply) const
{
    return new GetTriggersResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetTriggersRequestPrivate
 * \brief The GetTriggersRequestPrivate class provides private implementation for GetTriggersRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetTriggersRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetTriggersRequestPrivate::GetTriggersRequestPrivate(
    const GlueRequest::Action action, GetTriggersRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTriggersRequest
 * class' copy constructor.
 */
GetTriggersRequestPrivate::GetTriggersRequestPrivate(
    const GetTriggersRequestPrivate &other, GetTriggersRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
