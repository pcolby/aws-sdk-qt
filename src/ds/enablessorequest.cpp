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

#include "enablessorequest.h"
#include "enablessorequest_p.h"
#include "enablessoresponse.h"
#include "directoryservicerequest_p.h"

namespace QtAws {
namespace DirectoryService {

/*!
 * \class QtAws::DirectoryService::EnableSsoRequest
 * \brief The EnableSsoRequest class provides an interface for DirectoryService EnableSso requests.
 *
 * \inmodule QtAwsDirectoryService
 *
 *  <fullname>AWS Directory Service</fullname>
 * 
 *  AWS Directory Service is a web service that makes it easy for you to setup and run directories in the AWS cloud, or
 *  connect your AWS resources with an existing on-premises Microsoft Active Directory. This guide provides detailed
 *  information about AWS Directory Service operations, data types, parameters, and errors. For information about AWS
 *  Directory Services features, see <a href="https://aws.amazon.com/directoryservice/">AWS Directory Service</a> and the <a
 *  href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/what_is.html">AWS Directory Service Administration
 * 
 *  Guide</a>> <note>
 * 
 *  AWS provides SDKs that consist of libraries and sample code for various programming languages and platforms (Java, Ruby,
 *  .Net, iOS, Android, etc.). The SDKs provide a convenient way to create programmatic access to AWS Directory Service and
 *  other AWS services. For more information about the AWS SDKs, including how to download and install them, see <a
 *  href="http://aws.amazon.com/tools/">Tools for Amazon Web
 *
 * \sa DirectoryServiceClient::enableSso
 */

/*!
 * Constructs a copy of \a other.
 */
EnableSsoRequest::EnableSsoRequest(const EnableSsoRequest &other)
    : DirectoryServiceRequest(new EnableSsoRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a EnableSsoRequest object.
 */
EnableSsoRequest::EnableSsoRequest()
    : DirectoryServiceRequest(new EnableSsoRequestPrivate(DirectoryServiceRequest::EnableSsoAction, this))
{

}

/*!
 * \reimp
 */
bool EnableSsoRequest::isValid() const
{
    return false;
}


/*!
 * Returns a EnableSsoResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * EnableSsoRequest::response(QNetworkReply * const reply) const
{
    return new EnableSsoResponse(*this, reply);
}

/*!
 * \class QtAws::DirectoryService::EnableSsoRequestPrivate
 * \brief The EnableSsoRequestPrivate class provides private implementation for EnableSsoRequest.
 * \internal
 *
 * \inmodule QtAwsDirectoryService
 */

/*!
 *
 * Constructs a EnableSsoRequestPrivate object for DirectoryService \a action with,
 * public implementation \a q.
 */
EnableSsoRequestPrivate::EnableSsoRequestPrivate(
    const DirectoryServiceRequest::Action action, EnableSsoRequest * const q)
    : DirectoryServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the EnableSsoRequest
 * class' copy constructor.
 */
EnableSsoRequestPrivate::EnableSsoRequestPrivate(
    const EnableSsoRequestPrivate &other, EnableSsoRequest * const q)
    : DirectoryServiceRequestPrivate(other, q)
{

}

} // namespace DirectoryService
} // namespace QtAws
