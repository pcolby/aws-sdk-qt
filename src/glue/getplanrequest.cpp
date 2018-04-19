/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
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
 *
 * Constructs a GetPlanRequestPrivate object for Glue \a action with,
 * public implementation \a q.
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
