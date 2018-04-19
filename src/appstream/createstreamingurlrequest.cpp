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

#include "createstreamingurlrequest.h"
#include "createstreamingurlrequest_p.h"
#include "createstreamingurlresponse.h"
#include "appstreamrequest_p.h"

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::CreateStreamingURLRequest
 * \brief The CreateStreamingURLRequest class provides an interface for AppStream CreateStreamingURL requests.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::createStreamingURL
 */

/*!
 * Constructs a copy of \a other.
 */
CreateStreamingURLRequest::CreateStreamingURLRequest(const CreateStreamingURLRequest &other)
    : AppStreamRequest(new CreateStreamingURLRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateStreamingURLRequest object.
 */
CreateStreamingURLRequest::CreateStreamingURLRequest()
    : AppStreamRequest(new CreateStreamingURLRequestPrivate(AppStreamRequest::CreateStreamingURLAction, this))
{

}

/*!
 * \reimp
 */
bool CreateStreamingURLRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateStreamingURLResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateStreamingURLRequest::response(QNetworkReply * const reply) const
{
    return new CreateStreamingURLResponse(*this, reply);
}

/*!
 * \class QtAws::AppStream::CreateStreamingURLRequestPrivate
 * \brief The CreateStreamingURLRequestPrivate class provides private implementation for CreateStreamingURLRequest.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a CreateStreamingURLRequestPrivate object for AppStream \a action,
 * with public implementation \a q.
 */
CreateStreamingURLRequestPrivate::CreateStreamingURLRequestPrivate(
    const AppStreamRequest::Action action, CreateStreamingURLRequest * const q)
    : AppStreamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateStreamingURLRequest
 * class' copy constructor.
 */
CreateStreamingURLRequestPrivate::CreateStreamingURLRequestPrivate(
    const CreateStreamingURLRequestPrivate &other, CreateStreamingURLRequest * const q)
    : AppStreamRequestPrivate(other, q)
{

}

} // namespace AppStream
} // namespace QtAws
