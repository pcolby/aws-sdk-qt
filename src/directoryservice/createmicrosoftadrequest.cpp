/*
    Copyright 2013-2018 Paul Colby

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

#include "createmicrosoftadrequest.h"
#include "createmicrosoftadrequest_p.h"
#include "createmicrosoftadresponse.h"
#include "directoryservicerequest_p.h"

namespace QtAws {
namespace DirectoryService {

/*!
 * \class QtAws::DirectoryService::CreateMicrosoftADRequest
 * \brief The CreateMicrosoftADRequest class provides an interface for DirectoryService CreateMicrosoftAD requests.
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
 * \sa DirectoryServiceClient::createMicrosoftAD
 */

/*!
 * Constructs a copy of \a other.
 */
CreateMicrosoftADRequest::CreateMicrosoftADRequest(const CreateMicrosoftADRequest &other)
    : DirectoryServiceRequest(new CreateMicrosoftADRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateMicrosoftADRequest object.
 */
CreateMicrosoftADRequest::CreateMicrosoftADRequest()
    : DirectoryServiceRequest(new CreateMicrosoftADRequestPrivate(DirectoryServiceRequest::CreateMicrosoftADAction, this))
{

}

/*!
 * \reimp
 */
bool CreateMicrosoftADRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateMicrosoftADResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateMicrosoftADRequest::response(QNetworkReply * const reply) const
{
    return new CreateMicrosoftADResponse(*this, reply);
}

/*!
 * \class QtAws::DirectoryService::CreateMicrosoftADRequestPrivate
 * \brief The CreateMicrosoftADRequestPrivate class provides private implementation for CreateMicrosoftADRequest.
 * \internal
 *
 * \inmodule QtAwsDirectoryService
 */

/*!
 * Constructs a CreateMicrosoftADRequestPrivate object for DirectoryService \a action,
 * with public implementation \a q.
 */
CreateMicrosoftADRequestPrivate::CreateMicrosoftADRequestPrivate(
    const DirectoryServiceRequest::Action action, CreateMicrosoftADRequest * const q)
    : DirectoryServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateMicrosoftADRequest
 * class' copy constructor.
 */
CreateMicrosoftADRequestPrivate::CreateMicrosoftADRequestPrivate(
    const CreateMicrosoftADRequestPrivate &other, CreateMicrosoftADRequest * const q)
    : DirectoryServiceRequestPrivate(other, q)
{

}

} // namespace DirectoryService
} // namespace QtAws
