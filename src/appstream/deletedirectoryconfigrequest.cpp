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

#include "deletedirectoryconfigrequest.h"
#include "deletedirectoryconfigrequest_p.h"
#include "deletedirectoryconfigresponse.h"
#include "appstreamrequest_p.h"

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::DeleteDirectoryConfigRequest
 * \brief The DeleteDirectoryConfigRequest class provides an interface for AppStream DeleteDirectoryConfig requests.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  This is the <i>Amazon AppStream 2.0 API Reference</i>. This documentation provides descriptions and syntax for each of
 *  the actions and data types in AppStream 2.0. AppStream 2.0 is a fully managed, secure application streaming service that
 *  lets you stream desktop applications to users without rewriting applications. AppStream 2.0 manages the AWS resources
 *  that are required to host and run your applications, scales automatically, and provides access to your users on demand.
 * 
 *  </p <note>
 * 
 *  You can call the AppStream 2.0 API operations by using an interface VPC endpoint (interface endpoint). For more
 *  information, see <a
 *  href="https://docs.aws.amazon.com/appstream2/latest/developerguide/access-api-cli-through-interface-vpc-endpoint.html">Access
 *  AppStream 2.0 API Operations and CLI Commands Through an Interface VPC Endpoint</a> in the <i>Amazon AppStream 2.0
 *  Administration
 * 
 *  Guide</i>> </note>
 * 
 *  To learn more about AppStream 2.0, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/appstream2">Amazon AppStream 2.0 product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/documentation/appstream2">Amazon AppStream 2.0 documentation</a>
 *
 * \sa AppStreamClient::deleteDirectoryConfig
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDirectoryConfigRequest::DeleteDirectoryConfigRequest(const DeleteDirectoryConfigRequest &other)
    : AppStreamRequest(new DeleteDirectoryConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDirectoryConfigRequest object.
 */
DeleteDirectoryConfigRequest::DeleteDirectoryConfigRequest()
    : AppStreamRequest(new DeleteDirectoryConfigRequestPrivate(AppStreamRequest::DeleteDirectoryConfigAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDirectoryConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDirectoryConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDirectoryConfigRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDirectoryConfigResponse(*this, reply);
}

/*!
 * \class QtAws::AppStream::DeleteDirectoryConfigRequestPrivate
 * \brief The DeleteDirectoryConfigRequestPrivate class provides private implementation for DeleteDirectoryConfigRequest.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a DeleteDirectoryConfigRequestPrivate object for AppStream \a action,
 * with public implementation \a q.
 */
DeleteDirectoryConfigRequestPrivate::DeleteDirectoryConfigRequestPrivate(
    const AppStreamRequest::Action action, DeleteDirectoryConfigRequest * const q)
    : AppStreamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDirectoryConfigRequest
 * class' copy constructor.
 */
DeleteDirectoryConfigRequestPrivate::DeleteDirectoryConfigRequestPrivate(
    const DeleteDirectoryConfigRequestPrivate &other, DeleteDirectoryConfigRequest * const q)
    : AppStreamRequestPrivate(other, q)
{

}

} // namespace AppStream
} // namespace QtAws
