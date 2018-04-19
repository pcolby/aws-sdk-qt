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

#include "createimagebuilderrequest.h"
#include "createimagebuilderrequest_p.h"
#include "createimagebuilderresponse.h"
#include "appstreamrequest_p.h"

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::CreateImageBuilderRequest
 * \brief The CreateImageBuilderRequest class provides an interface for AppStream CreateImageBuilder requests.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::createImageBuilder
 */

/*!
 * Constructs a copy of \a other.
 */
CreateImageBuilderRequest::CreateImageBuilderRequest(const CreateImageBuilderRequest &other)
    : AppStreamRequest(new CreateImageBuilderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateImageBuilderRequest object.
 */
CreateImageBuilderRequest::CreateImageBuilderRequest()
    : AppStreamRequest(new CreateImageBuilderRequestPrivate(AppStreamRequest::CreateImageBuilderAction, this))
{

}

/*!
 * \reimp
 */
bool CreateImageBuilderRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateImageBuilderResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateImageBuilderRequest::response(QNetworkReply * const reply) const
{
    return new CreateImageBuilderResponse(*this, reply);
}

/*!
 * \class QtAws::AppStream::CreateImageBuilderRequestPrivate
 * \brief The CreateImageBuilderRequestPrivate class provides private implementation for CreateImageBuilderRequest.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a CreateImageBuilderRequestPrivate object for AppStream \a action,
 * with public implementation \a q.
 */
CreateImageBuilderRequestPrivate::CreateImageBuilderRequestPrivate(
    const AppStreamRequest::Action action, CreateImageBuilderRequest * const q)
    : AppStreamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateImageBuilderRequest
 * class' copy constructor.
 */
CreateImageBuilderRequestPrivate::CreateImageBuilderRequestPrivate(
    const CreateImageBuilderRequestPrivate &other, CreateImageBuilderRequest * const q)
    : AppStreamRequestPrivate(other, q)
{

}

} // namespace AppStream
} // namespace QtAws
