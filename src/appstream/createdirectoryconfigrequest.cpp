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

#include "createdirectoryconfigrequest.h"
#include "createdirectoryconfigrequest_p.h"
#include "createdirectoryconfigresponse.h"
#include "appstreamrequest_p.h"

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::CreateDirectoryConfigRequest
 * \brief The CreateDirectoryConfigRequest class provides an interface for AppStream CreateDirectoryConfig requests.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::createDirectoryConfig
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDirectoryConfigRequest::CreateDirectoryConfigRequest(const CreateDirectoryConfigRequest &other)
    : AppStreamRequest(new CreateDirectoryConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDirectoryConfigRequest object.
 */
CreateDirectoryConfigRequest::CreateDirectoryConfigRequest()
    : AppStreamRequest(new CreateDirectoryConfigRequestPrivate(AppStreamRequest::CreateDirectoryConfigAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDirectoryConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDirectoryConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDirectoryConfigRequest::response(QNetworkReply * const reply) const
{
    return new CreateDirectoryConfigResponse(*this, reply);
}

/*!
 * \class QtAws::AppStream::CreateDirectoryConfigRequestPrivate
 * \brief The CreateDirectoryConfigRequestPrivate class provides private implementation for CreateDirectoryConfigRequest.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 *
 * Constructs a CreateDirectoryConfigRequestPrivate object for AppStream \a action with,
 * public implementation \a q.
 */
CreateDirectoryConfigRequestPrivate::CreateDirectoryConfigRequestPrivate(
    const AppStreamRequest::Action action, CreateDirectoryConfigRequest * const q)
    : AppStreamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDirectoryConfigRequest
 * class' copy constructor.
 */
CreateDirectoryConfigRequestPrivate::CreateDirectoryConfigRequestPrivate(
    const CreateDirectoryConfigRequestPrivate &other, CreateDirectoryConfigRequest * const q)
    : AppStreamRequestPrivate(other, q)
{

}

} // namespace AppStream
} // namespace QtAws
