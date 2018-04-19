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

#include "getdataendpointrequest.h"
#include "getdataendpointrequest_p.h"
#include "getdataendpointresponse.h"
#include "kinesisvideorequest_p.h"

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::GetDataEndpointRequest
 * \brief The GetDataEndpointRequest class provides an interface for KinesisVideo GetDataEndpoint requests.
 *
 * \inmodule QtAwsKinesisVideo
 *
 *
 * \sa KinesisVideoClient::getDataEndpoint
 */

/*!
 * Constructs a copy of \a other.
 */
GetDataEndpointRequest::GetDataEndpointRequest(const GetDataEndpointRequest &other)
    : KinesisVideoRequest(new GetDataEndpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDataEndpointRequest object.
 */
GetDataEndpointRequest::GetDataEndpointRequest()
    : KinesisVideoRequest(new GetDataEndpointRequestPrivate(KinesisVideoRequest::GetDataEndpointAction, this))
{

}

/*!
 * \reimp
 */
bool GetDataEndpointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDataEndpointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDataEndpointRequest::response(QNetworkReply * const reply) const
{
    return new GetDataEndpointResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisVideo::GetDataEndpointRequestPrivate
 * \brief The GetDataEndpointRequestPrivate class provides private implementation for GetDataEndpointRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a GetDataEndpointRequestPrivate object for KinesisVideo \a action,
 * with public implementation \a q.
 */
GetDataEndpointRequestPrivate::GetDataEndpointRequestPrivate(
    const KinesisVideoRequest::Action action, GetDataEndpointRequest * const q)
    : KinesisVideoRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDataEndpointRequest
 * class' copy constructor.
 */
GetDataEndpointRequestPrivate::GetDataEndpointRequestPrivate(
    const GetDataEndpointRequestPrivate &other, GetDataEndpointRequest * const q)
    : KinesisVideoRequestPrivate(other, q)
{

}

} // namespace KinesisVideo
} // namespace QtAws
