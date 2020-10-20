/*
    Copyright 2013-2020 Paul Colby

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

#include "createflowrequest.h"
#include "createflowrequest_p.h"
#include "createflowresponse.h"
#include "mediaconnectrequest_p.h"

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::CreateFlowRequest
 * \brief The CreateFlowRequest class provides an interface for MediaConnect CreateFlow requests.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::createFlow
 */

/*!
 * Constructs a copy of \a other.
 */
CreateFlowRequest::CreateFlowRequest(const CreateFlowRequest &other)
    : MediaConnectRequest(new CreateFlowRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateFlowRequest object.
 */
CreateFlowRequest::CreateFlowRequest()
    : MediaConnectRequest(new CreateFlowRequestPrivate(MediaConnectRequest::CreateFlowAction, this))
{

}

/*!
 * \reimp
 */
bool CreateFlowRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateFlowResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateFlowRequest::response(QNetworkReply * const reply) const
{
    return new CreateFlowResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConnect::CreateFlowRequestPrivate
 * \brief The CreateFlowRequestPrivate class provides private implementation for CreateFlowRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a CreateFlowRequestPrivate object for MediaConnect \a action,
 * with public implementation \a q.
 */
CreateFlowRequestPrivate::CreateFlowRequestPrivate(
    const MediaConnectRequest::Action action, CreateFlowRequest * const q)
    : MediaConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateFlowRequest
 * class' copy constructor.
 */
CreateFlowRequestPrivate::CreateFlowRequestPrivate(
    const CreateFlowRequestPrivate &other, CreateFlowRequest * const q)
    : MediaConnectRequestPrivate(other, q)
{

}

} // namespace MediaConnect
} // namespace QtAws
