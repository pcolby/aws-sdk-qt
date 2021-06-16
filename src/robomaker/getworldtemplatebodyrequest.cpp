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

#include "getworldtemplatebodyrequest.h"
#include "getworldtemplatebodyrequest_p.h"
#include "getworldtemplatebodyresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::GetWorldTemplateBodyRequest
 * \brief The GetWorldTemplateBodyRequest class provides an interface for RoboMaker GetWorldTemplateBody requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::getWorldTemplateBody
 */

/*!
 * Constructs a copy of \a other.
 */
GetWorldTemplateBodyRequest::GetWorldTemplateBodyRequest(const GetWorldTemplateBodyRequest &other)
    : RoboMakerRequest(new GetWorldTemplateBodyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetWorldTemplateBodyRequest object.
 */
GetWorldTemplateBodyRequest::GetWorldTemplateBodyRequest()
    : RoboMakerRequest(new GetWorldTemplateBodyRequestPrivate(RoboMakerRequest::GetWorldTemplateBodyAction, this))
{

}

/*!
 * \reimp
 */
bool GetWorldTemplateBodyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetWorldTemplateBodyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetWorldTemplateBodyRequest::response(QNetworkReply * const reply) const
{
    return new GetWorldTemplateBodyResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::GetWorldTemplateBodyRequestPrivate
 * \brief The GetWorldTemplateBodyRequestPrivate class provides private implementation for GetWorldTemplateBodyRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a GetWorldTemplateBodyRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
GetWorldTemplateBodyRequestPrivate::GetWorldTemplateBodyRequestPrivate(
    const RoboMakerRequest::Action action, GetWorldTemplateBodyRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetWorldTemplateBodyRequest
 * class' copy constructor.
 */
GetWorldTemplateBodyRequestPrivate::GetWorldTemplateBodyRequestPrivate(
    const GetWorldTemplateBodyRequestPrivate &other, GetWorldTemplateBodyRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
