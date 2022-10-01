/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
