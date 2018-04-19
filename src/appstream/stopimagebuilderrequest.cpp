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

#include "stopimagebuilderrequest.h"
#include "stopimagebuilderrequest_p.h"
#include "stopimagebuilderresponse.h"
#include "appstreamrequest_p.h"

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::StopImageBuilderRequest
 * \brief The StopImageBuilderRequest class provides an interface for AppStream StopImageBuilder requests.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::stopImageBuilder
 */

/*!
 * Constructs a copy of \a other.
 */
StopImageBuilderRequest::StopImageBuilderRequest(const StopImageBuilderRequest &other)
    : AppStreamRequest(new StopImageBuilderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopImageBuilderRequest object.
 */
StopImageBuilderRequest::StopImageBuilderRequest()
    : AppStreamRequest(new StopImageBuilderRequestPrivate(AppStreamRequest::StopImageBuilderAction, this))
{

}

/*!
 * \reimp
 */
bool StopImageBuilderRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopImageBuilderResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopImageBuilderRequest::response(QNetworkReply * const reply) const
{
    return new StopImageBuilderResponse(*this, reply);
}

/*!
 * \class QtAws::AppStream::StopImageBuilderRequestPrivate
 * \brief The StopImageBuilderRequestPrivate class provides private implementation for StopImageBuilderRequest.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a StopImageBuilderRequestPrivate object for AppStream \a action,
 * with public implementation \a q.
 */
StopImageBuilderRequestPrivate::StopImageBuilderRequestPrivate(
    const AppStreamRequest::Action action, StopImageBuilderRequest * const q)
    : AppStreamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopImageBuilderRequest
 * class' copy constructor.
 */
StopImageBuilderRequestPrivate::StopImageBuilderRequestPrivate(
    const StopImageBuilderRequestPrivate &other, StopImageBuilderRequest * const q)
    : AppStreamRequestPrivate(other, q)
{

}

} // namespace AppStream
} // namespace QtAws
