/*
    Copyright 2013-2019 Paul Colby

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

#include "createfilesystemrequest.h"
#include "createfilesystemrequest_p.h"
#include "createfilesystemresponse.h"
#include "fsxrequest_p.h"

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::CreateFileSystemRequest
 * \brief The CreateFileSystemRequest class provides an interface for FSx CreateFileSystem requests.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::createFileSystem
 */

/*!
 * Constructs a copy of \a other.
 */
CreateFileSystemRequest::CreateFileSystemRequest(const CreateFileSystemRequest &other)
    : FSxRequest(new CreateFileSystemRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateFileSystemRequest object.
 */
CreateFileSystemRequest::CreateFileSystemRequest()
    : FSxRequest(new CreateFileSystemRequestPrivate(FSxRequest::CreateFileSystemAction, this))
{

}

/*!
 * \reimp
 */
bool CreateFileSystemRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateFileSystemResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateFileSystemRequest::response(QNetworkReply * const reply) const
{
    return new CreateFileSystemResponse(*this, reply);
}

/*!
 * \class QtAws::FSx::CreateFileSystemRequestPrivate
 * \brief The CreateFileSystemRequestPrivate class provides private implementation for CreateFileSystemRequest.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a CreateFileSystemRequestPrivate object for FSx \a action,
 * with public implementation \a q.
 */
CreateFileSystemRequestPrivate::CreateFileSystemRequestPrivate(
    const FSxRequest::Action action, CreateFileSystemRequest * const q)
    : FSxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateFileSystemRequest
 * class' copy constructor.
 */
CreateFileSystemRequestPrivate::CreateFileSystemRequestPrivate(
    const CreateFileSystemRequestPrivate &other, CreateFileSystemRequest * const q)
    : FSxRequestPrivate(other, q)
{

}

} // namespace FSx
} // namespace QtAws
