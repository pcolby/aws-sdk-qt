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

#include "getscreendatarequest.h"
#include "getscreendatarequest_p.h"
#include "getscreendataresponse.h"
#include "honeycoderequest_p.h"

namespace QtAws {
namespace Honeycode {

/*!
 * \class QtAws::Honeycode::GetScreenDataRequest
 * \brief The GetScreenDataRequest class provides an interface for Honeycode GetScreenData requests.
 *
 * \inmodule QtAwsHoneycode
 *
 *  Amazon Honeycode is a fully managed service that allows you to quickly build mobile and web apps for teams—without
 *  programming. Build Honeycode apps for managing almost anything, like projects, customers, operations, approvals,
 *  resources, and even your team.
 *
 * \sa HoneycodeClient::getScreenData
 */

/*!
 * Constructs a copy of \a other.
 */
GetScreenDataRequest::GetScreenDataRequest(const GetScreenDataRequest &other)
    : HoneycodeRequest(new GetScreenDataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetScreenDataRequest object.
 */
GetScreenDataRequest::GetScreenDataRequest()
    : HoneycodeRequest(new GetScreenDataRequestPrivate(HoneycodeRequest::GetScreenDataAction, this))
{

}

/*!
 * \reimp
 */
bool GetScreenDataRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetScreenDataResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetScreenDataRequest::response(QNetworkReply * const reply) const
{
    return new GetScreenDataResponse(*this, reply);
}

/*!
 * \class QtAws::Honeycode::GetScreenDataRequestPrivate
 * \brief The GetScreenDataRequestPrivate class provides private implementation for GetScreenDataRequest.
 * \internal
 *
 * \inmodule QtAwsHoneycode
 */

/*!
 * Constructs a GetScreenDataRequestPrivate object for Honeycode \a action,
 * with public implementation \a q.
 */
GetScreenDataRequestPrivate::GetScreenDataRequestPrivate(
    const HoneycodeRequest::Action action, GetScreenDataRequest * const q)
    : HoneycodeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetScreenDataRequest
 * class' copy constructor.
 */
GetScreenDataRequestPrivate::GetScreenDataRequestPrivate(
    const GetScreenDataRequestPrivate &other, GetScreenDataRequest * const q)
    : HoneycodeRequestPrivate(other, q)
{

}

} // namespace Honeycode
} // namespace QtAws
