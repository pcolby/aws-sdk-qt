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

#include "createimagebuilderstreamingurlrequest.h"
#include "createimagebuilderstreamingurlrequest_p.h"
#include "createimagebuilderstreamingurlresponse.h"
#include "appstreamrequest_p.h"

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::CreateImageBuilderStreamingURLRequest
 * \brief The CreateImageBuilderStreamingURLRequest class provides an interface for AppStream CreateImageBuilderStreamingURL requests.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::createImageBuilderStreamingURL
 */

/*!
 * Constructs a copy of \a other.
 */
CreateImageBuilderStreamingURLRequest::CreateImageBuilderStreamingURLRequest(const CreateImageBuilderStreamingURLRequest &other)
    : AppStreamRequest(new CreateImageBuilderStreamingURLRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateImageBuilderStreamingURLRequest object.
 */
CreateImageBuilderStreamingURLRequest::CreateImageBuilderStreamingURLRequest()
    : AppStreamRequest(new CreateImageBuilderStreamingURLRequestPrivate(AppStreamRequest::CreateImageBuilderStreamingURLAction, this))
{

}

/*!
 * \reimp
 */
bool CreateImageBuilderStreamingURLRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateImageBuilderStreamingURLResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateImageBuilderStreamingURLRequest::response(QNetworkReply * const reply) const
{
    return new CreateImageBuilderStreamingURLResponse(*this, reply);
}

/*!
 * \class QtAws::AppStream::CreateImageBuilderStreamingURLRequestPrivate
 * \brief The CreateImageBuilderStreamingURLRequestPrivate class provides private implementation for CreateImageBuilderStreamingURLRequest.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a CreateImageBuilderStreamingURLRequestPrivate object for AppStream \a action,
 * with public implementation \a q.
 */
CreateImageBuilderStreamingURLRequestPrivate::CreateImageBuilderStreamingURLRequestPrivate(
    const AppStreamRequest::Action action, CreateImageBuilderStreamingURLRequest * const q)
    : AppStreamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateImageBuilderStreamingURLRequest
 * class' copy constructor.
 */
CreateImageBuilderStreamingURLRequestPrivate::CreateImageBuilderStreamingURLRequestPrivate(
    const CreateImageBuilderStreamingURLRequestPrivate &other, CreateImageBuilderStreamingURLRequest * const q)
    : AppStreamRequestPrivate(other, q)
{

}

} // namespace AppStream
} // namespace QtAws
