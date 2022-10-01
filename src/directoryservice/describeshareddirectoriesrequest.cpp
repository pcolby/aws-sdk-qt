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

#include "describeshareddirectoriesrequest.h"
#include "describeshareddirectoriesrequest_p.h"
#include "describeshareddirectoriesresponse.h"
#include "directoryservicerequest_p.h"

namespace QtAws {
namespace DirectoryService {

/*!
 * \class QtAws::DirectoryService::DescribeSharedDirectoriesRequest
 * \brief The DescribeSharedDirectoriesRequest class provides an interface for DirectoryService DescribeSharedDirectories requests.
 *
 * \inmodule QtAwsDirectoryService
 *
 *  <fullname>Directory Service</fullname>
 * 
 *  Directory Service is a web service that makes it easy for you to setup and run directories in the Amazon Web Services
 *  cloud, or connect your Amazon Web Services resources with an existing self-managed Microsoft Active Directory. This
 *  guide provides detailed information about Directory Service operations, data types, parameters, and errors. For
 *  information about Directory Services features, see <a href="https://aws.amazon.com/directoryservice/">Directory
 *  Service</a> and the <a href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/what_is.html">Directory
 *  Service Administration
 * 
 *  Guide</a>> <note>
 * 
 *  Amazon Web Services provides SDKs that consist of libraries and sample code for various programming languages and
 *  platforms (Java, Ruby, .Net, iOS, Android, etc.). The SDKs provide a convenient way to create programmatic access to
 *  Directory Service and other Amazon Web Services services. For more information about the Amazon Web Services SDKs,
 *  including how to download and install them, see <a href="http://aws.amazon.com/tools/">Tools for Amazon Web
 *
 * \sa DirectoryServiceClient::describeSharedDirectories
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeSharedDirectoriesRequest::DescribeSharedDirectoriesRequest(const DescribeSharedDirectoriesRequest &other)
    : DirectoryServiceRequest(new DescribeSharedDirectoriesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeSharedDirectoriesRequest object.
 */
DescribeSharedDirectoriesRequest::DescribeSharedDirectoriesRequest()
    : DirectoryServiceRequest(new DescribeSharedDirectoriesRequestPrivate(DirectoryServiceRequest::DescribeSharedDirectoriesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeSharedDirectoriesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeSharedDirectoriesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSharedDirectoriesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSharedDirectoriesResponse(*this, reply);
}

/*!
 * \class QtAws::DirectoryService::DescribeSharedDirectoriesRequestPrivate
 * \brief The DescribeSharedDirectoriesRequestPrivate class provides private implementation for DescribeSharedDirectoriesRequest.
 * \internal
 *
 * \inmodule QtAwsDirectoryService
 */

/*!
 * Constructs a DescribeSharedDirectoriesRequestPrivate object for DirectoryService \a action,
 * with public implementation \a q.
 */
DescribeSharedDirectoriesRequestPrivate::DescribeSharedDirectoriesRequestPrivate(
    const DirectoryServiceRequest::Action action, DescribeSharedDirectoriesRequest * const q)
    : DirectoryServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeSharedDirectoriesRequest
 * class' copy constructor.
 */
DescribeSharedDirectoriesRequestPrivate::DescribeSharedDirectoriesRequestPrivate(
    const DescribeSharedDirectoriesRequestPrivate &other, DescribeSharedDirectoriesRequest * const q)
    : DirectoryServiceRequestPrivate(other, q)
{

}

} // namespace DirectoryService
} // namespace QtAws
