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

#include "startblueprintrunrequest.h"
#include "startblueprintrunrequest_p.h"
#include "startblueprintrunresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::StartBlueprintRunRequest
 * \brief The StartBlueprintRunRequest class provides an interface for Glue StartBlueprintRun requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::startBlueprintRun
 */

/*!
 * Constructs a copy of \a other.
 */
StartBlueprintRunRequest::StartBlueprintRunRequest(const StartBlueprintRunRequest &other)
    : GlueRequest(new StartBlueprintRunRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartBlueprintRunRequest object.
 */
StartBlueprintRunRequest::StartBlueprintRunRequest()
    : GlueRequest(new StartBlueprintRunRequestPrivate(GlueRequest::StartBlueprintRunAction, this))
{

}

/*!
 * \reimp
 */
bool StartBlueprintRunRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartBlueprintRunResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartBlueprintRunRequest::response(QNetworkReply * const reply) const
{
    return new StartBlueprintRunResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::StartBlueprintRunRequestPrivate
 * \brief The StartBlueprintRunRequestPrivate class provides private implementation for StartBlueprintRunRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a StartBlueprintRunRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
StartBlueprintRunRequestPrivate::StartBlueprintRunRequestPrivate(
    const GlueRequest::Action action, StartBlueprintRunRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartBlueprintRunRequest
 * class' copy constructor.
 */
StartBlueprintRunRequestPrivate::StartBlueprintRunRequestPrivate(
    const StartBlueprintRunRequestPrivate &other, StartBlueprintRunRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
